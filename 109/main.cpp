#include <iostream>

using namespace std;

int main()
{
    int n, dem(0);
    int a[10001];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];          //nhap mang

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[j]<a[i]) swap(a[i], a[j]);     //sap xep mang theo thu tu tang dan

    for(int i=1; i<=n; i++)
        if(a[i]%2==0){      //tim so chan nho nhat
            cout<<a[i];     //xuat ra so chan nho nhat
            dem++;          //bien dem cho thay co ton tai so chan
            break;          //tim dc so chan nho nhat thi ket thuc vong lap
        }

    if(dem==0) cout<<-1;        //neu khong ton tai so chan trong mang thi cout -1

    return 0;
}
