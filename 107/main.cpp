#include <iostream>

using namespace std;

int main()
{
    int n, dem(0), souoc(0);
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];                  //nhap mang
    }

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[j]>a[i]) swap(a[i], a[j]);     //sap xep mang theo thu tu giam dan

    for(int i=1; i<=n; i++){
        if(a[i]>1){
            for( int j=2; j<a[i]; j++)
                if(a[i]%j==0) souoc++;      //tim so uoc cua a[i]
            if(souoc==0){       //neu a[i] khong co uoc khac 1 va chinh no thi a[i] la so nguyen to
                cout<<a[i];     //xuat ra so nguyen to lon nhat trong mang
                dem++;          //bien dem de biet trong mang co so ngto khong
                break;          //tim duoc so ngto thi ket thuc vong lap
            }
            souoc=0;        //khoi tao lai so uoc
        }
    }
    if(dem==0) cout<<0;        //neu mang khong co so ngto cout 0
    return 0;
}
