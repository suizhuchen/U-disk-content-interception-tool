
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_XSHL_H__
#define __VCLS_RG_HSH_JB_RG_XSHL_H__

namespace rg_hsh_jb
{

class rg_xshl : public CVolBaseDataType
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_xshl)

public:
    virtual void* GetDataPtr () override  { return &rg_n2369; }
    virtual void GetDumpString (CVolString& strDump, INT nMaxDumpSize) override  { strDump.SetValueText (rg_n2369); }

public:
    rg_xshl ();

public:
    DOUBLE rg_n2369;
};

}

#endif  //__VCLS_RG_HSH_JB_RG_XSHL_H__
