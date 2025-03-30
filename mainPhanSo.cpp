#include <PhanSo.h>

using namespace std;

int main()
{
    PhanSo a, b, c;
    a.Nhap(); a.Rutgon(); a.Xuat();
    b.Nhap(); b.Rutgon(); b.Xuat();
    c = c.Tong(a, b);
    cout << "Tong: ";
    c.Xuat();
    cout << endl << "Hieu: ";
    c = c.Hieu(a, b);
    c.Xuat();
    cout << endl << "Tich: ";
    c = c.Tich(a, b);
    c.Xuat();
    cout << endl << "Thuong: ";
    c = c.Thuong(a, b);
    c.Xuat();
    cout << endl << "SoSanh: ";
    c = c.SoSanh(a, b);
    c.Xuat();
    return 0;
}
