#include <iostream>

using namespace std;

    void sapxepgiam ( float a[], int n){        //ham in ra mang theo thu tu tang dan
        for( int i=1; i<=n; i++){
            for( int j=i+1; j<=n; j++){
                if( a[i]<a[j]) swap(a[i],a[j]);
            }
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

    sapxepgiam ( a,n);          //goi ham
    return 0;
}
