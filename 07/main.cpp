#include <iostream>
#include <math.h>
using namespace std;

    struct diem{
        float x;
        float y;
    };
    typedef struct diem DIEM;

    void Nhap( DIEM &p){
        cout<<endl<<"Nhap hoanh do x: ";
        cin>>p.x;
        cout<<"Nhap tung do y: ";
        cin>>p.y;
    }

    void Xuat( DIEM p){
        cout<<endl<<"x="<<p.x;
        cout<<endl<<"y="<<p.y;
    }

    float khoangcach ( DIEM P, DIEM Q){
        return sqrt((Q.x-P.x)*(Q.x-P.x)+(Q.y-P.y)*(Q.y-P.y));
    }

    float chuvi(DIEM A, DIEM B, DIEM C){
        return khoangcach(A,B) + khoangcach(A,C) + khoangcach(B,C);
    }

    float dientich (DIEM A, DIEM B, DIEM C){
        float p=chuvi(A,B,C)/2;
        return sqrt(p*(p-khoangcach(A,B))*(p-khoangcach(A,C))*(p-khoangcach(B,C)));
    }

    DIEM TrongTam ( DIEM A, DIEM B, DIEM C){
        DIEM temp;
        temp.x = ( A.x + B.x + C.x )/3;
        temp.y = ( A.y + B.y + C.y )/3;
        return temp;
    }


int main()
{
    DIEM A,B,C;
    cout<<"Nhap toa do diem A: ";
    Nhap(A);
    cout<<endl<<"Nhap toa do diem B: ";
    Nhap(B);
    cout<<endl<<"Nhap toa do diem C: ";
    Nhap(C);
    cout<<endl<<"Chu vi cua tam giac ABC la: "<<chuvi(A,B,C);
    cout<<endl<<"Dien tich cua tam giac ABC la: "<<dientich(A,B,C);
    cout<<endl<<"Toa do trong tam cua tam giac ABC la: ";
    Xuat(TrongTam(A,B,C));
    return 0;
}
