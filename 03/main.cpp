#include <iostream>
#include <math.h>
using namespace std;

    struct diem {
        float x;
        float y;
        float z;
    };

    typedef struct diem DIEMKG;

    void Nhap( DIEMKG &p){
        cout<<endl<<"Nhap hoanh do x: ";
        cin>>p.x;
        cout<<"Nhap tung do y: ";
        cin>>p.y;
        cout<<"Nhap cao do z: ";
        cin>>p.z;
    }

    void Xuat( DIEMKG p){
        cout<<endl<<"x="<<p.x;
        cout<<endl<<"y="<<p.y;
        cout<<endl<<"z="<<p.z;
    }

    float khoangcach ( DIEMKG P, DIEMKG Q){
        return sqrt((Q.x-P.x)*(Q.x-P.x)+(Q.y-P.y)*(Q.y-P.y)+(Q.z-P.z)*(Q.z-P.z));
    }

int main()
{
    DIEMKG A,B;
    cout<<endl<<"Nhap toa do diem A:";
    Nhap(A);
    cout<<endl<<"Nhap toa do diem B:";
    Nhap(B);
    float kq=khoangcach(A,B);
    cout<<endl<<"Toa do diem A la:";
    Xuat(A);
    cout<<endl<<"Toa do diem B la:";
    Xuat(B);
    cout<<endl<<"Khoang cach AB la: "<<kq;
    return 0;
}
