#include <PhanSo.h>

void PhanSo::Nhap() {
    cout << "Nhap phan so: ";
    cin >> iTu >> iMau;
}

void PhanSo::Xuat() {
    cout << iTu << '/' << iMau << endl;
}

void PhanSo::Rutgon() {
    int gcd = __gcd(iTu, iMau);
    iTu /= gcd;
    iMau /= gcd;
    // Rút gọn bằng cách chia tử và mẫu cho gcd của chúng
}

PhanSo PhanSo::Tong(PhanSo a, PhanSo b) {
    PhanSo c; // Phân số trung gian để tính tổng
    c.iTu = a.iTu * b.iMau + a.iMau * b.iTu;
    c.iMau = a.iMau * b.iMau;
    c.Rutgon();
    return c;
}

PhanSo PhanSo::Hieu(PhanSo a, PhanSo b) {
    PhanSo c; // Phân số trung gian để tính hiệu
    c.iTu = a.iTu * b.iMau - a.iMau * b.iTu;
    c.iMau = a.iMau * b.iMau;
    c.Rutgon();
    return c;
}

PhanSo PhanSo::Tich(PhanSo a, PhanSo b) {
    PhanSo c;  // Phân số trung gian để tính tích
    c.iTu = a.iTu * b.iTu;
    c.iMau = a.iMau * b.iMau;
    c.Rutgon();
    return c;
}

PhanSo PhanSo::Thuong(PhanSo a, PhanSo b) {
    PhanSo c; // Phân số trung gian để tính thương
    c.iTu = a.iTu * b.iMau;
    c.iMau = a.iMau * b.iTu;
    c.Rutgon();
    return c;
}

PhanSo PhanSo::SoSanh(PhanSo a, PhanSo b) {
    PhanSo c; // Phân số trung gian để so sánh
    if(a.iTu * b.iMau > a.iMau * b.iTu) c = a;
    else c = b;
    return c;
}

PhanSo::PhanSo(){}
PhanSo::~PhanSo(){}
