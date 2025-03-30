#include "NgayThangNam.h"

void NgayThangNam::Nhap() {
    cout << "Nhap Ngay Thang Nam: ";
    cin >> iNgay >> iThang >> iNam;
};
void NgayThangNam::Xuat(){
    cout << iNgay << '/' << iThang << '/' << iNam;
};
void NgayThangNam::NgayThangNamTiepTheo() {
    if(iNgay == 31 && iThang == 12) /* Trường hợp là ngày cuối năm */ {
        iNgay = 1; iThang = 1; ++iNam;
    }
    else if(iThang == 2) /* Là tháng hai */ {
        int lim = 28 + ((iNam % 4 == 0) && (iNam % 100));
        // Xét số ngày tối đa trong tháng hai năm đó, câu lệnh logic là xét năm đó nhuận hay không
        if(iNgay < lim) {
            ++iNgay; // Ngày hôm đó nhỏ hơn số ngày tối đa thì chỉ cần cộng ngày thêm một
        }
        else {
            iNgay = 1; iThang = 3; // Nếu đã đạt tối đã thì ngày tiếp theo sẽ là ngày 1 tháng 3
        }
    }
    else if(iThang == 4|| iThang == 6|| iThang == 9|| iThang == 11) /* Trường hợp các tháng có 30 ngày */ {
        if(iNgay < 30) {
            ++iNgay; // Ngày hôm đó nhỏ hơn số ngày tối đa thì chỉ cần cộng ngày thêm một
        }
        else {
            iNgay = 1; ++iThang; // Nếu đã đạt tối đã thì ngày tiếp theo sẽ là ngày 1 tháng tiếp theo
        }
    }
    else /* Các tháng có 31 ngày */ {
        if(iNgay < 31) {
            ++iNgay; // Ngày hôm đó nhỏ hơn số ngày tối đa thì chỉ cần cộng ngày thêm một
        }
        else {
            iNgay = 1; ++iThang; // Nếu đã đạt tối đã thì ngày tiếp theo sẽ là ngày 1 tháng tiếp theo
        }
    }
};

NgayThangNam::NgayThangNam(){};
NgayThangNam::~NgayThangNam(){};
