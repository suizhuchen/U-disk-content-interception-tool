﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_WBSHZL_H__
#define __VCLS_RG_HSH_JB_RG_WBSHZL_H__

namespace rg_hsh_jb
{

class rg_wbshzl : public rg_kzhdxl
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_wbshzl)

public:
    inline_ void _CopySelfFromExtra (const rg_wbshzl& objCopyFrom)
    {
        m_aryData.Copy (objCopyFrom.m_aryData);
    }
    inline_ BOOL _IsSelfEqualExtra (const rg_wbshzl& objCompare) const
    {
        return (BOOL)m_aryData.IsEqual (objCompare.m_aryData, FALSE);
    }
    inline_ CMStringArray& data ()
    {
        return m_aryData;
    }
    CMStringArray m_aryData;

public:
    virtual void GetDumpString (CVolString& rg_n1877, INT rg_n1878);
    rg_wbshzl ();
};

}

#endif  //__VCLS_RG_HSH_JB_RG_WBSHZL_H__