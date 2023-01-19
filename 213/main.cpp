#include <iostream>

using namespace std;

    bool sohoanthien ( int x){          //ham kiem tra 1 so co phai la so hoan thien khong
        if(x<=1) return false;
        int nghiem=0;
        for( int i=1; i<x; i++){
            if(x%i==0) nghiem+=i;
        }
        if( nghiem==x) return true;
        return false;
    }

    void xephoanthien ( int a[], int n){         //ham sap xep cac so hoan trong mang giam dan, khong phai so nguyento thi giu nguyen
        for( int i=1; i<=n; i++){
            if( sohoanthien(a[i])){
                for( int j=i+1; j<=n; j++){
                    if( sohoanthien(a[j])&& a[i]<a[j] ) swap(a[i],a[j]);
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

    xephoanthien (a,n);          //goi ham
    return 0;
}
