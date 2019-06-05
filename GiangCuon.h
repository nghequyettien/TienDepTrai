#pragma once
#include "CuaHang.h"
#include "DonGia.h"
#include <iostream>
using namespace std;
class GiangCuon
{
static int soluongcuahang;
private:
    CuaHang so_luong[1000];
public:
    GiangCuon(){}
    ~GiangCuon(){}
    GiangCuon(CuaHang);
    void themcuahang(CuaHang);
    void inratatcacuonghang();
};
int GiangCuon::soluongcuahang=0;
GiangCuon::GiangCuon(CuaHang x)
{
    this->so_luong[soluongcuahang]=x;
    soluongcuahang++;
}
void GiangCuon::inratatcacuonghang()
{
    int add=0;
    for(int i=0;i<soluongcuahang;i++)
    {
        add=add+this->so_luong[i].sotienlai();
        cout<<this->so_luong[i].getTen()<<"\t\t"<<this->so_luong[i].sotienlai()<<endl;
    }
    cout<<"Tong So Tien Lai La:  "<<add<<endl;
}
void GiangCuon::themcuahang(CuaHang a)
{
    this->so_luong[soluongcuahang]=a;
    soluongcuahang++;
}
