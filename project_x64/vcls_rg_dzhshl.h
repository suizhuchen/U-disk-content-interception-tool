
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_DZHSHL_H__
#define __VCLS_RG_HSH_JB_RG_DZHSHL_H__

namespace rg_hsh_jb
{

class rg_dzhshl : public CVolBaseDataType
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_dzhshl)

public:
    virtual void* GetDataPtr () override  { return &rg_n2264; }
    virtual void GetDumpString (CVolString& strDump, INT nMaxDumpSize) override  { strDump.SetValueText (rg_n2264); }

public:
    rg_dzhshl ();

public:
    SHORT rg_n2264;
};

}

#endif  //__VCLS_RG_HSH_JB_RG_DZHSHL_H__
