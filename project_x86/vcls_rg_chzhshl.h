﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_CHZHSHL_H__
#define __VCLS_RG_HSH_JB_RG_CHZHSHL_H__

namespace rg_hsh_jb
{

class rg_chzhshl : public CVolBaseDataType
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_chzhshl)

public:
    virtual void* GetDataPtr () override  { return &rg_n2368; }
    virtual void GetDumpString (CVolString& strDump, INT nMaxDumpSize) override  { strDump.SetValueText (rg_n2368); }

public:
    rg_chzhshl ();

public:
    INT64 rg_n2368;
};

}

#endif  //__VCLS_RG_HSH_JB_RG_CHZHSHL_H__
