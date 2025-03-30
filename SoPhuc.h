#ifndef SOPHUC_H
#define SOPHUC_H
#include <bits/stdc++.h>
using namespace std;

class SoPhuc
{
    public:
        SoPhuc();
        void Nhap();
        void Xuat();
        SoPhuc Tong(SoPhuc a, SoPhuc b);
        SoPhuc Hieu(SoPhuc a, SoPhuc b);
        SoPhuc Tich(SoPhuc a, SoPhuc b);
        SoPhuc Thuong(SoPhuc a, SoPhuc b);
        virtual ~SoPhuc();

    protected:

    private:
        double iThuc, iAo;
};

#endif // SOPHUC_H
