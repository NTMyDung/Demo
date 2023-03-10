#include <iostream>

using namespace std;
    struct phanso
         {
         int tu;
         int mau;
         };
    typedef struct phanso PHANSO;

    void Nhap(PHANSO &x){
         cout<<"Nhap tu: ";
         cin>>x.tu;
         cout<<endl<<"Nhap mau: ";
         cin>>x.mau;
         }

     void Xuat(PHANSO x){
         cout<<endl<<"Tu: "<<x.tu;
         cout<<endl<<"Mau: "<<x.mau;
         }

    int XetDau(PHANSO x)
         {
         if(x.tu*x.mau>0)
             return 1;
         if(x.tu*x.mau<0)
            return -1;
         return 0;
         }
int main()
{
     PHANSO a;
     Nhap(a);
     int kq = XetDau(a);
     switch(kq)
     {
         case 1: {
             cout<<endl<<"Phan so duong";
             break;
         }

         case -1: {
             cout<<endl<<"Phan so am" ;
             break;
         }

         case 0:{
              cout<<endl<<"Phan so bang 0";
              break;
         }
     }
    return 0;
}
