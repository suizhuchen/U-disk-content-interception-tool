﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_ZJL_H__
#define __VCLS_RG_HSH_JB_RG_ZJL_H__

namespace rg_hsh_jb
{

class rg_zjl : public CVolBaseDataType
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_zjl)

public:
    virtual void* GetDataPtr () override  { return &rg_n2263; }
    virtual void GetDumpString (CVolString& strDump, INT nMaxDumpSize) override  { strDump.SetValueText (rg_n2263); }

public:
    rg_zjl ();

public:
    S_BYTE rg_n2263;
};

}

#endif  //__VCLS_RG_HSH_JB_RG_ZJL_H__
