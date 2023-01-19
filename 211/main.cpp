#include <iostream>

using namespace std;

    void sapxepletang ( float a[], int n){        //ham in ra mang theo thu tu tang dan o cac vi tri le, vi tri chan giu nguyen gia tri
        for( int i=1; i<=n; i=i+2){
            for( int j=i+2; j<=n; j=j+2){
                if( a[i]>a[j]) swap(a[i],a[j]);
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

    sapxepletang ( a,n);          //goi ham
    return 0;
}
