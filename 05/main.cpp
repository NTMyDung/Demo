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

     int SoSanh(PHANSO x,PHANSO y){
         float a=(float)x.tu/x.mau;
         float b=(float)y.tu/y.mau;
         if(a>b)
         return 1;
         if(a<b)
         return -1;
         return 0;
        }

int main()
{
    PHANSO a,b;
    cout<<endl<<"Nhap phan so thu nhat: ";
    Nhap(a);
    cout<<endl<<"Nhap phan so thu hai: ";

    Nhap(b);
    int kq = SoSanh(a,b);
    switch(kq)
     {
         case 1: {
             cout<<endl<<"Phan so lon hon la: ";
             Xuat(a);
             break;
         }

         case -1: {
             cout<<endl<<"Phan so lon hon la: ";
             Xuat(b);
             break;
         }

         case 0:{
              cout<<endl<<"Hai phan so bang nhau";
              break;
         }
     }

    return 0;
}
