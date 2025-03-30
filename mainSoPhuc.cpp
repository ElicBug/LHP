#include <SoPhuc.h>

using namespace std;

int main()
{
    SoPhuc a, b;
    a.Nhap(); b.Nhap();
    SoPhuc c;
    cout << "Tong: ";
    c = c.Tong(a, b);
    c.Xuat();
    cout << "Hieu: ";
    c = c.Hieu(a, b);
    c.Xuat();
    cout << "Tich: ";
    c = c.Tich(a, b);
    c.Xuat();
    cout << "Thuong: ";
    c = c.Thuong(a, b);
    c.Xuat();
    return 0;
}
