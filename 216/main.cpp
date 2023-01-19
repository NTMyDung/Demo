#include <iostream>

using namespace std;

     void sapxepchan ( int a[], int n){         //ham sap xep cac so chan trong mang tang dan, khong phai so chan thi giu nguyen
        for( int i=1; i<=n; i++){
            if( a[i]%2==0){
                for( int j=i+1; j<=n; j++){
                    if(a[j]%2==0 && a[i]>a[j] ) swap(a[i],a[j]);
                }
            }
        }
    }

     void sapxeple ( int a[], int n){         //ham sap xep cac so le trong mang tang dan, khong phai so le thi giu nguyen
        for( int i=1; i<=n; i++){
            if( a[i]%2!=0){
                for( int j=i+1; j<=n; j++){
                    if(a[j]%2!=0 && a[i]>a[j] ) swap(a[i],a[j]);
                }
            }
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    sapxepchan ( a,n);          //sap xep chan tang
    sapxeple (a,n);             //sap xep le tang
    for( int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    return 0;
}
