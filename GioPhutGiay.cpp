#include "GioPhutGiay.h"

void GioPhutGiay::Nhap() {
    cout << "Nhap Gio Phut Giay: ";
    cin >> iGio >> iPhut >> iGiay;
}

void GioPhutGiay::Xuat() {
    cout << iGio << '/' << iPhut << '/' << iGiay;
}

void GioPhutGiay::TinhCongThemMotGiay() {
    if(iGio == 23 && iPhut == 59 && iGiay == 59) /* Khi thời điểm lúc 23 giờ 59 phút 59 giây */ {
        iGio = 0; iPhut = 0; iGiay = 0;
    }
    else if(iPhut == 59 && iGiay == 59) /* Khi thời điểm 59 phút 59 giây */{
        ++iGio; iPhut = 0; iGiay = 0;
    }
    else if(iGiay == 59) /* Khi thời điểm 59 giây */ {
        ++iPhut; iGiay = 0;
    }
    else /* Các thòi điểm khác */ ++iGiay;
}

GioPhutGiay::GioPhutGiay(){}
GioPhutGiay::~GioPhutGiay(){}
