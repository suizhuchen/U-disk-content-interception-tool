﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_MFCJM_JB_CVOLWINFORM_H__
#define __VCLS_RG_HSH_MFCJM_JB_CVOLWINFORM_H__

namespace rg_hsh_MFCjm_jb
{

class CVolWinForm : public rg_zjbjq, public IWinFormEventListener
{
    DECLARE_EMPTY_VOL_CLASS (rg_hsh_MFCjm_jb, CVolWinForm)

public:
    void _OnInitExtra ();
    inline_ void _OnCleanupExtra ()  {  DetachEventListener ();  }
    virtual BOOL CreateMfcControl (CVolNativeWndCreateParam* pCreateParam) override;
    virtual BOOL OnNativeWndMsg (MSG* pMsg) override  {  return OnProcessNativeWndMsg (pMsg);  }
    virtual void AttachEventListener () override;
    virtual void DetachEventListener () override;
    virtual BOOL_P IsEventAttached () override;
    virtual void OnCreate () override  {  BaseClass::OnCreate ();  }
    virtual void OnDestroy () override  {  BaseClass::OnDestroy ();  }
    virtual void OnPostNcDestroy () override  {  BaseClass::OnPostNcDestroy ();  }
    virtual void OnSize () override  {  BaseClass::OnSize ();  }
    virtual void OnShow (BOOL_P blpShown) override  {  BaseClass::OnShow (blpShown);  }
    virtual void OnMove () override  {  BaseClass::OnMove ();  }
    virtual void OnGetMinMaxInfo (MINMAXINFO* lpMMI) override;
    virtual void OnInitDialog () override  { rg_n6223 (); }
    virtual BOOL OnPreTranslateMessage (MSG* pMsg) override  {  return (rg_n6224 ((INT_P)pMsg->hwnd, (INT)pMsg->message, (INT_P)pMsg->wParam, (INT_P)pMsg->lParam, (INT_P)pMsg) == FALSE);  }
    virtual BOOL OnCommand (const INT nCommandID) override  {  return (rg_n6210 (nCommandID) != 0);  }
    virtual void OnCommandSelect (const INT nCommandID) override  {  rg_n6212 (nCommandID);  }
    virtual BOOL OnBeforeClose () override  {  return (rg_n6214 () == 0);  }
    virtual BOOL OnBeforeWindowClose () override  {  return (rg_n6215 () == 0);  }
    virtual void OnFirstActive () override  {  rg_n6216 ();  }
    virtual void OnActive () override  {  rg_n6217 ();  }
    virtual void OnInactive () override  {  rg_n6218 ();  }
    virtual void OnIconOper (INT nType) override  {  rg_n6219 (nType);  }
    virtual void OnBeforeNativeWndCreate (CVolNativeWndCreateParam* pCreateParam) override;
    virtual void OnCalcNativeWndPos (CVolNativeWndCreateParam* pCreateParam) override;
    BOOL CreateVolWindowWithNewMenu (CVolWinForm* pParentWindow, INT nLeft, INT nTop, INT nWidth, INT nHeight, CVolRuntimeClass* pVolMenuRuntimeClass);
    BOOL CreateMainVolWindowWithNewMenu ( INT nLeft, INT nTop, INT nWidth, INT nHeight, CVolRuntimeClass* pVolMenuRuntimeClass);
    INT CreateVolDialogWithNewMenu (INT nLeft, INT nTop, INT nWidth, INT nHeight, CVolRuntimeClass* pVolMenuRuntimeClass, BOOL blForceUseDialogStyle);
    BOOL CreateVolWindow (CVolWinForm* pParentWindow, INT nLeft, INT nTop, INT nWidth, INT nHeight, CRefVolMenu* pVolMenu);
    BOOL CreateMainVolWindow ( INT nLeft, INT nTop, INT nWidth, INT nHeight, CRefVolMenu* pVolMenu);
    INT CreateVolDialog (INT nLeft, INT nTop, INT nWidth, INT nHeight, CRefVolMenu* pVolMenu, BOOL blForceUseDialogStyle);
    void SetWndMenuClass (CVolRuntimeClass* pVolMenuRuntimeClass);
    inline_ void SetWndMenu (CRefVolMenu* pVolMenu)  { ((CVWnd_WinForm*)GetMfcWndPtr ())->SetWndMenu (pVolMenu); }

public:
    INT rg_n6210 (INT rg_n6211);
    INT rg_n6212 (INT rg_n6213);
    INT rg_n6214 ();
    INT rg_n6215 ();
    INT rg_n6216 ();
    INT rg_n6217 ();
    INT rg_n6218 ();
    INT rg_n6219 (INT rg_n6220);
    INT rg_n6221 (rg_chkwzhxzhxx& rg_n6222);
    INT rg_n6223 ();
    virtual BOOL rg_n6224 (INT rg_n6225, INT rg_n6226, INT rg_n6227, INT rg_n6228, INT rg_n6229);
    CVolWinForm ();
    virtual ~CVolWinForm ();

public:
    void ra_CVolWinForm_n6210 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6212 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6214 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6215 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6216 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6217 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6218 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6219 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6221 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinForm_n6223 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_9;
    CVolEventReceiver rw_10;
    CVolEventReceiver rw_11;
    CVolEventReceiver rw_12;
    CVolEventReceiver rw_13;
    CVolEventReceiver rw_14;
    CVolEventReceiver rw_15;
    CVolEventReceiver rw_16;
    CVolEventReceiver rw_17;
    CVolEventReceiver rw_18;
};

}

#endif  //__VCLS_RG_HSH_MFCJM_JB_CVOLWINFORM_H__