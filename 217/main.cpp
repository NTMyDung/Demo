#include <iostream>

using namespace std;

     void duongtang ( float a[], int n){         //ham sap xep cac so duong trong mang tang dan, khong phai so duong thi giu nguyen
        for( int i=1; i<=n; i++){
            if( a[i]>0){
                for( int j=i+1; j<=n; j++){
                    if(a[j]>0 && a[i]>a[j] ) swap(a[i],a[j]);
                }
            }
        }
    }

     void amgiam ( float a[], int n){         //ham sap xep cac so am trong mang giam dan, khong phai so am thi giu nguyen
        for( int i=1; i<=n; i++){
            if( a[i]<0){
                for( int j=i+1; j<=n; j++){
                    if(a[j]<0 && a[i]<a[j] ) swap(a[i],a[j]);
                }
            }
        }
    }

int main()
{
     int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    duongtang ( a,n);          //sap xep so duong tang
    amgiam (a,n);             //sap xep so am giam
    for( int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    return 0;
}
