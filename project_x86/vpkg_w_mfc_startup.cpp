﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#include "stdafx.h"
#include "vol_user_app.h"

static void sInitMfcApp ()
{
    AfxOleInit ();
    INITCOMMONCONTROLSEX InitCtrls;
    InitCtrls.dwSize = sizeof (InitCtrls);
    InitCtrls.dwICC = ICC_WIN95_CLASSES;
    InitCommonControlsEx (&InitCtrls);
    AfxEnableControlContainer ();
}
#if (defined (_CONSOLE) || defined (_VOL_CONSOLE_EXE))
int _tmain (int argc, TCHAR* argv [])
{
    setlocale (LC_CTYPE, "");
    const HMODULE hModule = ::GetModuleHandle (NULL);
    ASSERT (hModule != NULL);
    if (!AfxWinInit (hModule, NULL, ::GetCommandLine (), 0))
    {
        _tprintf (_T ("Error:  MFC initialize failed.\r\n"));
        return -1;
    }
    sInitMfcApp ();
    g_objVolApp.init (hModule, argc, (const TCHAR**)argv, gGetStartupRuntimeClass ());
    const int nResult = gCallStartupMethod ();
    g_objVolApp.OnBeforeExit ();
    return nResult;
}
#elif (defined (_USRDLL) || defined (_VOL_DLL))
CVolMFCApp theApp;
BOOL CVolMFCApp::InitInstance ()
{
    sInitMfcApp ();
    CWinApp::InitInstance ();
    g_objVolApp.init (m_hInstance, 0, NULL, gGetStartupRuntimeClass ());
    return (gCallStartupMethod () != 0);
}
int CVolMFCApp::ExitInstance ()
{
    if (IS_VOL_INSTANCE_OF (g_objVolApp.GetVolApp (), rg_hsh_jb::rg_dtkchxl))
        ((rg_hsh_jb::rg_dtkchxl&)g_objVolApp.GetVolApp ()).rg_n5834 ();
    g_objVolApp.OnBeforeExit ();
    return CWinApp::ExitInstance ();
}
#else
CVolMFCApp theApp;
BOOL CVolMFCApp::InitInstance ()
{
    sInitMfcApp ();
    CVolMfcAppBase::InitInstance ();
    COleMessageFilter* pMessageFilter = AfxOleGetMessageFilter ();
    if (pMessageFilter != NULL)
    {
        pMessageFilter->EnableBusyDialog (FALSE);
        pMessageFilter->SetBusyReply (SERVERCALL_RETRYLATER);
        pMessageFilter->EnableNotRespondingDialog (TRUE);
        pMessageFilter->SetMessagePendingDelay (-1);
    }
    g_objVolApp.init (m_hInstance, __argc, (const TCHAR**)__targv, gGetStartupRuntimeClass ());
    if (IS_VOL_INSTANCE_OF (g_objVolApp.GetVolApp (), rg_hsh_jb::rg_chkchxl))
        m_pobjWinApp = (rg_hsh_jb::rg_chkchxl*)&g_objVolApp.GetVolApp ();
    return (gCallStartupMethod () != 0 &&
            m_pMainWnd != NULL);
}
BOOL CVolMFCApp::PreTranslateMessage (MSG* pMsg)
{
    if (m_pobjWinApp != NULL &&
            m_pobjWinApp->rg_n5825 ((INT_P)pMsg->hwnd, (INT)pMsg->message,
                (INT_P)pMsg->wParam, (INT_P)pMsg->lParam, (INT_P)pMsg) == FALSE)
    {
        return TRUE;
    }
    return CVolMfcAppBase::PreTranslateMessage (pMsg);
}
BOOL CVolMFCApp::OnIdle (LONG lCount)
{
    if (m_pobjWinApp == NULL)
        return CVolMfcAppBase::OnIdle (lCount);
    static BOOL_P s_blpMFCNeedIdle = TRUE;
    static DWORD s_dwTickCountEntry = 0;
    if (lCount == 0)
    {
        s_blpMFCNeedIdle = TRUE;
        s_dwTickCountEntry = GetTickCount ();
    }
    if (s_blpMFCNeedIdle)
    {
        s_blpMFCNeedIdle = CVolMfcAppBase::OnIdle (lCount);
        return TRUE;
    }
    if (lCount < 2)
        return TRUE;
    return m_pobjWinApp->rg_n5831 ((INT)(GetTickCount () - s_dwTickCountEntry));
}
int CVolMFCApp::ExitInstance ()
{
    if (m_pobjWinApp != NULL)
        m_pobjWinApp->rg_n5833 ();
    g_objVolApp.OnBeforeExit ();
    return CVolMfcAppBase::ExitInstance ();
}
#endif
