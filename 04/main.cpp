#include <iostream>

using namespace std;
    struct ngay{
         int ngay;
         int thang;
         int nam;
    };
    typedef struct ngay NGAY;

    void Nhap(NGAY&x){
        cout<<"Nhap ngay: ";
        cin>>x.ngay;
        cout<<endl<<"Nhap thang: ";
        cin>>x.thang;
        cout<<endl<<"Nhap nam: ";
        cin>>x.nam;
    }

    void Xuat(NGAY x){
        cout<<endl<<"Ngay "<<x.ngay<<" thang "<<x.thang<<" nam "<<x.nam;
    }

    int ktnhuan(NGAY x){
         if(x.nam%4==0 &&
         x.nam%100!=0)
         return 1;
         if(x.nam%400==0)
         return 1;
         return 0;
    }

    NGAY HomQua (NGAY x){
        int NgayThang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(ktnhuan(x)==1) NgayThang[1] = 29;
        if( x.ngay==1) {
            if(x.thang==1) {
                x.thang=12;
                x.nam--;
                }
                else x.thang--;
            x.ngay = NgayThang[x.thang-1];

            }
            else x.ngay--;
        return x;

    }

int main()
{

     NGAY a;
     Nhap(a);
     NGAY kq = HomQua(a);
     cout<<endl<<"Ngay ban dau la: ";
     Xuat(a);
     cout<<endl<<"Ngay hom qua la: ";
     Xuat(kq);

    return 0;
}

