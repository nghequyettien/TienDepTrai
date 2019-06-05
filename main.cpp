#include <iostream>
#include "BanhCuon.h"
#include "DonGia.h"
#include "CuaHang.h"
#include "GiangCuon.h"
using namespace std;
int main()
{
    banhcuon_chay a(0.1,0.2,100,200);
    banhcuon_mong b(0.2,0.3,100,200);
    banhcuon_thit c(0.4,0.5,100,200);
    banhcuon_dacbiet d(0.1,0.1,0.1,100,200,300);



    dongia don1(a,b,c,d),don2(a,b,c,d),don3(a,b,c,d),don4(a,b,c,d);
    CuaHang Cua1("cua1",don1);
    CuaHang Cua2("cua2",don2);
    CuaHang Cua3("cua3",don3);
    CuaHang Cua4("cua4",don4);
    thuonghieu k(Cua1);
    k.themcuahang(Cua2);
    k.themcuahang(Cua3);
    k.themcuahang(Cua4);
    k.inratatcacuonghang();
}