#include <iostream>

using namespace std;

int main()
{
    int n, dem(0);
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];                  //nhap mang
    }
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[j]<a[i]) swap(a[i], a[j]);     //sap xep mang theo thu tu tang dan

    for(int i=1; i<=n; i++){
        if(a[i]>0){
            int tong=0;                 // bien de tinh tong cac uoc that su cua a[i] va khoi tao lai bang 0 voi moi gia tri i
            for( int j=1; j<a[i]; j++)
                if(a[i]%j==0) tong+=j;  // tinh tong uoc cua a[i]
            if(tong==a[i]) {            // xet dieu kien cua so hoan thien
                    cout<<a[i];          // xuat ra so hoan thien nho nhat trong mang
                    dem++;              // bien dem de biet co ton tai so hoan thien trong mang
                    break;              // ket thuc vong lap
            }
        }
    }
    if(dem==0) cout<<0;        //neu mang khong co so hoan thien thi cout 0

    return 0;
}
