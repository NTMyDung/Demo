#include <iostream>

using namespace std;

    bool nguyento ( int x){             //ham kiem tra 1 so co phai so nguyen to khong
        if( x<=1) return false;
        if( x==2) return true;
        for( int i=2; i<x; i++){
            if( x%i==0) return false;
        }
        return true;
    }

    void xepnguyento ( int a[], int n){         //ham sap xep cac so nguyen to trong mang tang dan, khong phai so nguyento thi giu nguyen
        for( int i=1; i<=n; i++){
            if( nguyento(a[i])){
                for( int j=i+1; j<=n; j++){
                    if(nguyento(a[j])&& a[i]>a[j] ) swap(a[i],a[j]);
                }
            }
        }
        for( int i=1; i<=n; i++){
            cout<<a[i]<<" ";
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    xepnguyento ( a,n);          //goi ham
    return 0;
}
