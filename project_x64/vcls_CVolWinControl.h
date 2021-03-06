
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_MFCJM_JB_CVOLWINCONTROL_H__
#define __VCLS_RG_HSH_MFCJM_JB_CVOLWINCONTROL_H__

namespace rg_hsh_MFCjm_jb
{

class CVolWinControl : public rg_hsh_jb::rg_ckdxl
{
    DECLARE_VOL_CLASS (rg_hsh_MFCjm_jb, CVolWinControl)

public:
    inline_ CMfcWndObject* GetMfcWndObject ()
    {
        ASSERT (ASSER_P_IS_INSTANCE_OF (GetRefObject (), CMfcWndObject) &&
                ((CMfcWndObject*)GetRefObject ())->GetRefWndPtr () != NULL);
        return (CMfcWndObject*)GetRefObject ();
    }
    inline_ CWnd* GetMfcWndPtrWithValidHWnd ()
    {
        return GetMfcWndObject ()->SafeGetRefWndPtrWithValidHWnd ();
    }
    inline_ CWnd* GetMfcWndPtrWithValidHWndNotNullObject ()
    {
        return (IsNullObject () ? NULL : GetMfcWndObject ()->SafeGetRefWndPtrWithValidHWnd ());
    }
    inline_ CWnd* SafeGetMfcWndPtrWithValidHWnd ()
    {
        return (this == NULL ? NULL : GetMfcWndPtrWithValidHWnd ());
    }
    inline_ HWND GetMfcWndHandle ()
    {
        return GetMfcWndObject ()->SafeGetRefWndHandle ();
    }
    inline_ HWND SafeGetMfcWndHandle ()
    {
        return (this == NULL ? NULL : GetMfcWndHandle ());
    }
    inline_ CWnd* GetMfcWndPtr ()
    {
        return GetMfcWndObject ()->GetRefWndPtr ();
    }
    inline_ DWORD GetControlStyle ()
    {
        CWnd* pWnd = GetMfcWndPtrWithValidHWnd ();
        return (pWnd == NULL ? GetMfcWndObject ()->m_dwAttrInitialStyle : pWnd->GetStyle ());
    }
    inline_ DWORD GetControlExStyle ()
    {
        CWnd* pWnd = GetMfcWndPtrWithValidHWnd ();
        return (pWnd == NULL ? GetMfcWndObject ()->m_dwAttrInitialExStyle : pWnd->GetExStyle ());
    }
    inline_ void _OnInitControl ()  {  }
    inline_ void _OnAfterEventAttached (BOOL blAttach)
    {
        if (blAttach)
            AttachEventListener ();
        else
            DetachEventListener ();
    }
    inline_ BOOL CreateVolControl (CVolWinControl* pParentControl, INT nLeft, INT nTop, INT nWidth, INT nHeight, INT nID)
    {
        CVolNativeWndCreateParam param (pParentControl->SafeGetMfcWndPtrWithValidHWnd (), nLeft, nTop, nWidth, nHeight, nID);
        return CreateMfcControl (&param);
    }
    virtual BOOL CreateMfcControl (CVolNativeWndCreateParam* pCreateParam)
    {
        ASSERT (pCreateParam != NULL);
        return FALSE;
    }
    virtual void OnBeforeNativeWndCreate (CVolNativeWndCreateParam* pCreateParam);
    virtual void OnCalcNativeWndPos (CVolNativeWndCreateParam* pCreateParam)  {  }
    virtual void OnAfterNativeWndCreate (CWnd* pWnd, const CVolNativeWndCreateParam* pCreateParam);
    virtual BOOL OnProcessNativeWndMsg (MSG* pMsg);
    virtual void OnBeforeDataOverwrite () override
    {
        DetachEventListener ();
    }
    virtual void AttachEventListener ()  {  }
    virtual void DetachEventListener ()  {  }
    virtual BOOL_P IsEventAttached ()  { return FALSE; }
    void AttachEventListenerIfNone ()  { if (IsEventAttached () == FALSE)  AttachEventListener (); }
    BOOL PopupSubMenuClass (INT xPos, INT yPos, CVolRuntimeClass* pVolMenuRuntimeClass, BOOL_P blpIsTrayMenu, INT_P npSubMenuIndex);

public:
    INT rg_n7704 (INT rg_n7705, INT rg_n7706, INT rg_n7707);
    INT rg_n7708 (INT rg_n7709, INT rg_n7710, INT rg_n7711);
    INT rg_n7712 (INT rg_n7713, INT rg_n7714, INT rg_n7715);
    INT rg_n7716 (INT rg_n7717, INT rg_n7718, INT rg_n7719);
    INT rg_n7720 (INT rg_n7721, INT rg_n7722, INT rg_n7723);
    INT rg_n7724 (INT rg_n7725, INT rg_n7726, INT rg_n7727);
    INT rg_n7728 (INT rg_n7729, INT rg_n7730);
    INT rg_n7731 (INT rg_n7732, INT rg_n7733);
    INT rg_n7734 (INT rg_n7735, INT rg_n7736);
    INT rg_n7737 ();
    INT rg_n7738 ();
    INT rg_n7739 (TCHAR rg_n7740);
    INT rg_n7741 (INT64 rg_n7742, INT rg_n7743, INT64 rg_n7744, INT64 rg_n7745, INT64 rg_n7746);
    void rg_n7748 (CVolString& rg_n7749);
    void rg_n7753 (BOOL rg_n7754);
    CVolWinControl ();

public:
    CVolString rg_n7788;

public:
    void ra_CVolWinControl_n7704 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7708 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7712 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7716 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7720 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7724 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7728 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7731 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7734 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7737 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7738 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7739 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_CVolWinControl_n7741 (VOID_FUNC fnReceiver, CVolObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_20;
    CVolEventReceiver rw_21;
    CVolEventReceiver rw_22;
    CVolEventReceiver rw_23;
    CVolEventReceiver rw_24;
    CVolEventReceiver rw_25;
    CVolEventReceiver rw_26;
    CVolEventReceiver rw_27;
    CVolEventReceiver rw_28;
    CVolEventReceiver rw_29;
    CVolEventReceiver rw_30;
    CVolEventReceiver rw_31;
    CVolEventReceiver rw_32;
};

}

#endif  //__VCLS_RG_HSH_MFCJM_JB_CVOLWINCONTROL_H__
