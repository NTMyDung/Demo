#include <iostream>

using namespace std;

    void sapxepduong ( float a[], int n){         //ham sap xep cac so duong trong mang tang dan, khong phai so duong thi giu nguyen
        for( int i=1; i<=n; i++){
            if( a[i]>0){
                for( int j=i+1; j<=n; j++){
                    if(a[j]>0 && a[i]>a[j] ) swap(a[i],a[j]);
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
    float a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    sapxepduong( a,n);          //goi ham
    return 0;
}
