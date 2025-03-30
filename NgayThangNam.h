#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
#include<bits/stdc++.h>
using namespace std;

class NgayThangNam
{
    public:
        NgayThangNam();
        void Nhap();
        void Xuat();
        void NgayThangNamTiepTheo();
        virtual ~NgayThangNam();

    protected:

    private:
        int iNgay, iThang, iNam;
};

#endif // NGAYTHANGNAM_H


