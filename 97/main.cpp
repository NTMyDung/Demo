#include <iostream>

using namespace std;

int main()
{
    int n, dem(0), gtriduongnhonhat;
    cin>>n;
    float a[1001], b[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        b[i]=a[i];                  //nhap mang
    }

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[j]<a[i]) swap(a[i], a[j]);     //sap xep mang theo thu tu tang dan

    for(int i=1; i<=n; i++){            //duyet mang
        if(a[i]>0){
            gtriduongnhonhat=a[i];      //tim so duong nho nhat trong mang
            dem++;                      //bien dem de cho biet co ton tai gia tri duong trong mang
            break;                      //tim duoc roi thi ket thuc vong lap
        }
    }

    for(int i=1; i<=n; i++)
        if(b[i]==gtriduongnhonhat) cout<<i<<endl;       //in ra tat ca vi tri cua gtri duong nho nhat


    if(dem==0) cout<<-1;        //neu mang khong co gia tri duong thi cout -1

    return 0;
}
