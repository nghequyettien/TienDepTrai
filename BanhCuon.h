#pragma once
#include <iostream>
using namespace std;
class banhcuon
{
    protected:
        float gam_vo;
        float gia_vo;
    public:
        banhcuon(){}
        ~banhcuon(){}
        float getgam_vo()const;
        float getgia_vo()const;
        virtual float tong_gia()=0;
};
class banhcuon_chay:public banhcuon
{
    protected:
        float gam_nhan_chay;
        float gia_nhan_chay;
    public:
        banhcuon_chay(){}
        ~banhcuon_chay(){}
        float getgam_nhan_chay()const;
        float getgia_nhan_chay()const;
        banhcuon_chay(float gam_vo,float gam_nhan_chay,float gia_vo,float gia_nhan_chay);
        float tong_gia();
};
class banhcuon_mong:public banhcuon
{
    protected:
        float gam_nhan_mong;
        float gia_nhan_mong;
    public:
        banhcuon_mong(){}
        ~banhcuon_mong(){}
        float getgam_nhan_mong()const;
        float getgia_nhan_mong()const;
        banhcuon_mong(float gam_vo,float gam_nhan_mong,float gia_vo,float gia_nhan_mong);
        float tong_gia();
};
class banhcuon_thit:public banhcuon
{
    protected:
        float gam_nhan_thit;
        float gia_nhan_thit;
    public:
        banhcuon_thit(){}
        ~banhcuon_thit(){}
        float getgam_nhan_thit()const;
        float getgia_nhan_thit()const;
        banhcuon_thit(float gam_vo,float gam_nhan_thit,float gia_vo,float gia_nhan_thit);
        float tong_gia();
};
class banhcuon_dacbiet:public banhcuon_thit
{
    protected:
        float gam_nhan_cacuong;
        float gia_nhan_cacuong;
    public:
        banhcuon_dacbiet(){}
        ~banhcuon_dacbiet(){}
        float getgam_nhan_thit()const;
        float getgia_nhan_thit()const;
        float getgam_nhan_cacuong()const;
        float getgia_nhan_cacuong()const;
        banhcuon_dacbiet(float gam_vo,float gam_nhan_thit,float gam_nhan_cacuong,float gia_vo,float gia_nhan_thit,float gia_nhan_cacuong);
        float tong_gia();
};
float banhcuon::getgam_vo()const
{
    return this->gam_vo;
}
float banhcuon::getgia_vo()const
{
    return this->gia_vo;
}


float banhcuon_chay::getgam_nhan_chay()const
{
    return this->gam_nhan_chay;
}
float banhcuon_chay::getgia_nhan_chay()const
{
    return this->gia_nhan_chay;
}
banhcuon_chay::banhcuon_chay(float gam_vo,float gam_nhan_chay,float gia_vo,float gia_nhan_chay)
{
    this->gam_vo=gam_vo;
    this->gia_vo=gia_vo;
    this->gam_nhan_chay=gam_nhan_chay;
    this->gia_nhan_chay=gia_nhan_chay;
}
float banhcuon_chay::tong_gia()
{
    return this->gam_vo*this->gia_vo+this->gam_nhan_chay*this->gia_nhan_chay;
}


float banhcuon_mong::getgam_nhan_mong()const
{
    return this->gam_nhan_mong;
}
float banhcuon_mong::getgia_nhan_mong()const
{
    return this->gia_nhan_mong;
}
banhcuon_mong::banhcuon_mong(float gam_vo,float gam_nhan_mong,float gia_vo,float gia_nhan_mong)
{
    this->gam_vo=gam_vo;
    this->gia_vo=gia_vo;
    this->gam_nhan_mong=gam_nhan_mong;
    this->gia_nhan_mong=gia_nhan_mong;
}
float banhcuon_mong::tong_gia()
{
    return this->gam_vo*this->gia_vo+this->gam_nhan_mong*this->gia_nhan_mong;
}


float banhcuon_thit::getgam_nhan_thit()const
{
    return this->gam_nhan_thit;
}
float banhcuon_thit::getgia_nhan_thit()const
{
    return this->gia_nhan_thit;
}
banhcuon_thit::banhcuon_thit(float gam_vo,float gam_nhan_thit,float gia_vo,float gia_nhan_thit)
{
    this->gam_vo=gam_vo;
    this->gia_vo=gia_vo;
    this->gam_nhan_thit=gam_nhan_thit;
    this->gia_nhan_thit=gia_nhan_thit;
}
float banhcuon_thit::tong_gia()
{
    return this->gam_vo*this->gia_vo+this->gam_nhan_thit*this->gia_nhan_thit;
}


float banhcuon_dacbiet::getgam_nhan_cacuong()const
{
    return this->gam_nhan_cacuong;
}
float banhcuon_dacbiet::getgia_nhan_cacuong()const
{
    return this->gia_nhan_cacuong;
}
banhcuon_dacbiet::banhcuon_dacbiet(float gam_vo,float gam_nhan_thit,float gam_nhan_cacuong,float gia_vo,float gia_nhan_thit,float gia_nhan_cacuong)
{
    this->gam_vo=gam_vo;
    this->gia_vo=gia_vo;
    this->gam_nhan_thit=gam_nhan_thit;
    this->gia_nhan_thit=gia_nhan_thit;
    this->gam_nhan_cacuong=gam_nhan_cacuong;
    this->gia_nhan_cacuong=gia_nhan_cacuong;
}
float banhcuon_dacbiet::tong_gia()
{
    return this->gam_vo*this->gia_vo+this->gam_nhan_thit*this->gia_nhan_thit+this->gam_nhan_cacuong*this->gia_nhan_cacuong;
}
