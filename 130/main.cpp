#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, dem(0);
    cin>>n;
    float a[1001],b[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        b[i]=a[i];
    }                   //nhap vao mang a[] dong thoi cho mang b[]=a[]

     sort(b+1, b+n+1);      //sap xep tang dan mang b[]

     for(int i=1; i<=n; i++){
        if(b[i]==b[i+1]) {
            cout<<"xin moi nhap lai";
            dem++;                      //neu nhap vao gia tri trung nhau thi khong thoa man de bai -> yeu cau nhap lai
        }
    }
    if(dem==0){
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                if(a[i]<=a[j]) cout<<"("<<a[i]<<","<<a[j]<<")";
                    else cout<<"("<<a[j]<<","<<a[i]<<")";
                cout<<endl;                                         //so sanh lan luot 2 gia tri va xuat ra theo yeu cau
            }
        }

    }
    return 0;
}
