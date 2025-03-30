#include "SoPhuc.h"

void SoPhuc::Nhap() {
    cout << "Nhap so phuc: ";
    cin >> iThuc >> iAo;
}

void SoPhuc::Xuat() {
    cout << iThuc;
    if(iAo > 0)
        cout << '+' << iAo << 'i';
    if(iAo < 0)
        cout << iAo << 'i';
    cout << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc a, SoPhuc b) {
    SoPhuc tmp; // Số phức trung gian để tính tổng
    tmp.iThuc = a.iThuc + b.iThuc;
    tmp.iAo = a.iAo + b.iAo;
    return tmp;
}

SoPhuc SoPhuc::Hieu(SoPhuc a, SoPhuc b) {
    SoPhuc tmp; // Số phức trung gian để tính hiệu
    tmp.iThuc = a.iThuc - b.iThuc;
    tmp.iAo = a.iAo - b.iAo;
    return tmp;
}

SoPhuc SoPhuc::Tich(SoPhuc a, SoPhuc b) {
    SoPhuc tmp; // Số phức trung gian để tính tích
    tmp.iThuc = a.iThuc * b.iThuc - a.iAo * b.iAo;
    tmp.iAo = a.iThuc * b.iAo + a.iAo * b.iThuc;
    return tmp;
}

SoPhuc SoPhuc::Thuong(SoPhuc a, SoPhuc b) {
    SoPhuc tmp; // Số phức trung gian để tính thương
    tmp.iThuc = (a.iThuc * b.iThuc + a.iAo * b.iAo) / (a.iAo * a.iAo + b.iAo * b.iAo);
    tmp.iAo = (b.iThuc * a.iAo - a.iThuc * b.iAo) / (a.iAo * a.iAo + b.iAo * b.iAo);
    return tmp;
}

SoPhuc::SoPhuc(){}
SoPhuc::~SoPhuc(){}
