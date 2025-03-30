#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H
#include <bits/stdc++.h>
using namespace std;

class GioPhutGiay
{
    public:
        GioPhutGiay();
        void Nhap();
        void Xuat();
        void TinhCongThemMotGiay();
        virtual ~GioPhutGiay();

    protected:

    private:
        int iGio, iPhut, iGiay;
};

#endif // GIOPHUTGIAY_H
