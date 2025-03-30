#ifndef PHANSO_H
#define PHANSO_H
#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
    public:
        PhanSo();
        void Nhap();
        void Xuat();
        void Rutgon();
        PhanSo Tong(PhanSo a, PhanSo b);
        PhanSo Hieu(PhanSo a, PhanSo b);
        PhanSo Tich(PhanSo a, PhanSo b);
        PhanSo Thuong(PhanSo a, PhanSo b);
        PhanSo SoSanh(PhanSo a, PhanSo b);
        virtual ~PhanSo();

    protected:

    private:
        int iTu, iMau;
};

#endif // PHANSO_H
