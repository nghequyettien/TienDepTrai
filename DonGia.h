#pragma once
#include "BanhCuon.h"
#include <iostream>
#include <vector>
using namespace std;
class dongia
{
    protected:
        vector<banhcuon*> a;
    public:
        dongia(){}
        ~dongia(){}
        dongia(banhcuon_chay,banhcuon_mong,banhcuon_thit,banhcuon_dacbiet);
        void in_ra_don_gia();
        int tien_lai();
};
dongia::dongia(banhcuon_chay a,banhcuon_mong b,banhcuon_thit c,banhcuon_dacbiet d)
{
    this->a=a;
    this->b=b;
    this->c=c;
    this->d=d;
}
void dongia::in_ra_don_gia()
{
    cout<<"ID\t"<<"Ten loai banh\t\t"<<"Khoi Luong Vo\t"<<"Khoi Luong Nhan\t\t"<<"Gia"<<endl;
    cout<<"1\t"<<"Banh Cuong Chay\t\t"<<this->a.getgam_vo()<<"\t\t"<<this->a.getgam_nhan_chay()<<"\t\t\t"<<this->a.tong_gia()<<endl;
    cout<<"2\t"<<"Banh Cuong Mong\t\t"<<this->b.getgam_vo()<<"\t\t"<<this->b.getgam_nhan_mong()<<"\t\t\t"<<this->b.tong_gia()<<endl;
    cout<<"3\t"<<"Banh Cuong Thit\t\t"<<this->c.getgam_vo()<<"\t\t"<<this->c.getgam_nhan_thit()<<"\t\t\t"<<this->c.tong_gia()<<endl;
    cout<<"4\t"<<"Banh Cuong Dac Biet\t"<<this->d.getgam_vo()<<"\t\t"<<this->d.getgam_nhan_cacuong()<<"\t\t\t"<<this->d.tong_gia()<<endl;
    cout<<"\n\t\t\t\t\t\t\tTong so tien:\t"<<a.tong_gia()+b.tong_gia()+c.tong_gia()+d.tong_gia()<<endl;
}
int dongia::tien_lai()
{
    return (a.tong_gia()+b.tong_gia()+c.tong_gia()+d.tong_gia())*0.1;
}