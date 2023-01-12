#include <iostream>

using namespace std;

int main()
{
    int n, dem(0);
    cin>>n;
    float a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];                  //nhap mang
    }

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[j]>a[i]) swap(a[i], a[j]);     //sap xep mang theo thu tu giam dan

    for(int i=1; i<=n; i++){        //duyet mang
        if(a[i]<0){                 //tim so am dau tien cung la so am lon nhat trong mang
            cout<<a[i];             //xuat gtri am lon nhat trong mang
            dem++;                  //bien dem de cho biet co ton tai gia tri am trong mang
            break;                  //tim duoc roi thi ket thuc vong lap
        }
    }

    if(dem==0) cout<<0;        //neu mang khong co gia tri am thi cout 0
    return 0;
}
