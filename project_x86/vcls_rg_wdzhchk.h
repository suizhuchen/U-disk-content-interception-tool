
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_CHX_RG_WDZHCHK_H__
#define __VCLS_RG_HSH_CHX_RG_WDZHCHK_H__

namespace rg_hsh_chx
{

class rg_wdzhchk : public rg_hsh_MFCjm_jb::CVolWinForm
{
    DECLARE_VOL_CLASS (rg_hsh_chx, rg_wdzhchk)

public:

    virtual INT GetDesignClientWidth () const override  {  return 500;  }
    virtual INT GetDesignClientHeight () const override  {  return 300;  }

    static void CALLBACK rg_n107 (TCHAR rg_n108);
    static void CALLBACK rg_n115 (TCHAR rg_n116);
    static INT CALLBACK CallWindowProcW (INT rg_n120, INT rg_n121, INT rg_n122, INT rg_n123, INT rg_n124);
    static INT CALLBACK rg_n129 (INT rg_n130, INT rg_n131, INT rg_n132, INT rg_n133);
    rg_wdzhchk ();
    virtual ~rg_wdzhchk ();
    virtual void OnWinContainerCreated () override;

public:
    static INT re_wdzhchk_n103 (CVolObject* pobjEventReceiver, CVolObject* pobjEventSource, INT nTagNumber)
    {
        return ((rg_wdzhchk*)pobjEventReceiver)->rg_n103 ((rg_wdzhchk&)*pobjEventSource, nTagNumber);
    }
    static INT re_wdzhchk_n117 (CVolObject* pobjEventReceiver, CVolObject* pobjEventSource, INT nTagNumber)
    {
        return ((rg_wdzhchk*)pobjEventReceiver)->rg_n117 ((rg_hsh_MFCjm_jb::rg_ann&)*pobjEventSource, nTagNumber);
    }

protected:
    INT rg_n103 (rg_wdzhchk& rg_n104, INT rg_n105);
    INT rg_n117 (rg_hsh_MFCjm_jb::rg_ann& rg_n118, INT rg_n119);

protected:
    rg_hsh_MFCjm_jb::rg_ann rg_n102;
    CVolObjectPointer* rw_33;
};

}

#endif  //__VCLS_RG_HSH_CHX_RG_WDZHCHK_H__
