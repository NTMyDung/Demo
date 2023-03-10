#include <iostream>

using namespace std;

    struct phanso
         {
         int tu;
         int mau;
         };
    typedef struct phanso PHANSO;

    void Nhap(PHANSO &x){
         cout<<endl<<"Nhap tu: ";
         cin>>x.tu;
         cout<<"Nhap mau: ";
         cin>>x.mau;
         }

    void Xuat(PHANSO x){
         cout<<endl<<"Tu: "<<x.tu;
         cout<<endl<<"Mau: "<<x.mau;
         }

    PHANSO Tong(PHANSO x,PHANSO y){
         PHANSO temp;
         temp.tu = x.tu*y.mau + x.mau*y.tu;
         temp.mau = x.mau*y.mau;
         return temp;
         }

    PHANSO Hieu(PHANSO x,PHANSO y){
         PHANSO temp;
         temp.tu = x.tu*y.mau-x.mau*y.tu;
         temp.mau = x.mau*y.mau;
         return temp;
         }

    PHANSO Tich(PHANSO x,PHANSO y){
         PHANSO temp;
         temp.tu=x.tu*y.tu;
         temp.mau=x.mau*y.mau;
         return temp;
         }

    PHANSO Thuong(PHANSO x,PHANSO y){
         PHANSO temp;
         temp.tu = x.tu*y.mau;
         temp.mau = x.mau*y.tu;
         return temp;
         }
int main()
{
    PHANSO a,b;
    cout<<"Nhap phan so thu nhat: ";
    Nhap(a);
    cout<<endl<<"Nhap phan so thu hai: ";
    Nhap(b);
    cout<<endl<<"Tong hai phan so la: ";
    Xuat(Tong(a,b));
    cout<<endl<<"Hieu hai phan so la: ";
    Xuat(Hieu(a,b));
    cout<<endl<<"Tich hai phan so la: ";
    Xuat(Tich(a,b));
    cout<<endl<<"Thuong hai phan so la: ";
    Xuat(Thuong(a,b));
    return 0;
}
