#pragma once
#include "DonGia.h"
#include <iostream>
using namespace std;
class CuaHang
{
protected:
    string Ten;
    dongia hoadon;
public:
    CuaHang();
    ~CuaHang();
    string getTen()const;
    CuaHang(string,dongia);
    int sotienlai();
};
CuaHang::CuaHang(){}
CuaHang::~CuaHang(){}
CuaHang::CuaHang(string Ten,dongia hoadon)
{
    this->Ten=Ten;
    this->hoadon=hoadon;
}
int CuaHang::sotienlai()
{
    return this->hoadon.tien_lai();
}
string CuaHang::getTen()const
{
    return this->Ten;
}
