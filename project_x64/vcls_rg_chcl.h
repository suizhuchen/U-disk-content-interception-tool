
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_HSH_JB_RG_CHCL_H__
#define __VCLS_RG_HSH_JB_RG_CHCL_H__

namespace rg_hsh_jb
{

class rg_chcl : public rg_kzhdxl
{
    DECLARE_VOL_CLASS (rg_hsh_jb, rg_chcl)

public:
    inline_ rg_chcl (const SIZE* psizeCopy) : rg_chcl ()  { Copy (psizeCopy); }
    inline_ void Copy (const SIZE* psizeCopy)  { ASSERT (psizeCopy != NULL); rg_n3223 = psizeCopy->cx; rg_n3224 = psizeCopy->cy; }
    inline_ void Out (SIZE* psizeOut) const  { ASSERT (psizeOut != NULL); psizeOut->cx = rg_n3223; psizeOut->cy = rg_n3224; }
    inline_ CMSize ToSize () const  { return CMSize (rg_n3223, rg_n3224); }

public:
    virtual void GetDumpString (CVolString& rg_n3232, INT rg_n3233);
    rg_chcl ();

public:
    INT rg_n3223;
    INT rg_n3224;

public:
    struct S
    {
        INT rg_n3223;
        INT rg_n3224;
    };

    S* GetStruct (S* pInf);
    void SetStruct (const S* pInf);
};

}

#endif  //__VCLS_RG_HSH_JB_RG_CHCL_H__
