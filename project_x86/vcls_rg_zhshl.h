﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_ZHSHL_H__
#define __VCLS_RG_HSH_JB_RG_ZHSHL_H__

namespace rg_hsh_jb
{

class rg_zhshl : public CVolBaseDataType
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_zhshl)

public:
    virtual void* GetDataPtr () override  { return &rg_n2366; }
    virtual void GetDumpString (CVolString& strDump, INT nMaxDumpSize) override  { strDump.SetValueText (rg_n2366); }

public:
    rg_zhshl ();

public:
    INT rg_n2366;
};

}

#endif  //__VCLS_RG_HSH_JB_RG_ZHSHL_H__
