﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#include "stdafx.h"
#include "vol_user_app.h"

namespace rg_hsh_jb
{

rg_wbshzl::rg_wbshzl ()
{
}

BOOL rg_wbshzl::_IsSelfEqual (const rg_wbshzl& objCompare) const
{
    if (_IsSelfEqualExtra (objCompare) == FALSE)
        return FALSE;
    return TRUE;
}

void rg_wbshzl::_CopySelfFrom (const rg_wbshzl& objCopyFrom)
{
    _CopySelfFromExtra (objCopyFrom);
}

void rg_wbshzl::GetDumpString (CVolString& rg_n1777, INT rg_n1778)
{
    data ().GetDumpString (rg_n1777, rg_n1778);
}

}
