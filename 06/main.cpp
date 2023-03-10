#include <iostream>

using namespace std;

    struct sophuc{
        float thuc;
        float ao;
    };
    typedef struct sophuc SOPHUC;

    void Nhap( SOPHUC &x){
        cout<<endl<<"Phan thuc: ";
        cin>>x.thuc;
        cout<<"Phan ao: ";
        cin>>x.ao;
    }

    void Xuat ( SOPHUC x){
        cout<<endl<<"Phan thuc: "<<x.thuc;
        cout<<endl<<"Phan ao: "<<x.ao;
    }

    SOPHUC Tong ( SOPHUC x, SOPHUC y){
        SOPHUC temp;
        temp.thuc = x.thuc + y.thuc;
        temp.ao = x.ao + y.ao;
        return temp;
    }

    SOPHUC Hieu ( SOPHUC x, SOPHUC y){
        SOPHUC temp;
        temp.thuc = x.thuc - y.thuc;
        temp.ao = x.ao - y.ao;
        return temp;
    }

    SOPHUC Tich ( SOPHUC x, SOPHUC y){
        SOPHUC temp;
        temp.thuc = x.thuc*y.thuc - x.ao*y.ao;
        temp.ao = x.thuc*y.ao + x.ao*y.thuc;
        return temp;
    }




int main()
{
    SOPHUC x,y;
    cout<<"Nhap so phuc thu nhat: ";
    Nhap(x);
    cout<<endl<<"Nhap so phuc thu hai: ";
    Nhap(y);
    cout<<endl<<"Tong hai so phuc la: ";
    Xuat(Tong(x,y));
    cout<<endl<<"Hieu hai so phuc la: ";
    Xuat(Hieu(x,y));
    cout<<endl<<"Tich hai so phuc la: ";
    Xuat(Tich(x,y));
    return 0;
}
