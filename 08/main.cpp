#include <iostream>

using namespace std;

     struct diem{
        float x;
        float y;
    };
    typedef struct diem DIEM;

    struct duongtron{
        DIEM I;
        float R;
    };

    typedef struct duongtron DUONGTRON;

    void NhapDiem( DIEM &p){
        cout<<endl<<"Nhap hoanh do x: ";
        cin>>p.x;
        cout<<"Nhap tung do y: ";
        cin>>p.y;
    }

    void XuatDiem( DIEM p){
        cout<<endl<<"x="<<p.x;
        cout<<endl<<"y="<<p.y;
    }

    void Nhapdt ( DUONGTRON &c){
        cout<<"Nhap toa do tam duong tron: ";
        NhapDiem(c.I);
        cout<<endl<<"Nhap ban kinh duong tron: ";
        cin>>c.R;
    }

     void Xuatdt( DUONGTRON c){
        cout<<endl<<"Toa do tam: ";
        XuatDiem(c.I);
        cout<<endl<<"Ban kinh: "<<c.R;
    }

    float chuvi(DUONGTRON c){
        return 2*3.14*c.R;
    }

    float dientich (DUONGTRON c){
        return 3.14*c.R*c.R;
    }

int main()
{
    DUONGTRON c;
    Nhapdt (c);
    Xuatdt(c);
    cout<<endl<<"Chu vi = "<<chuvi(c);
    cout<<endl<<"Dien tich = "<<dientich(c);
    return 0;
}
