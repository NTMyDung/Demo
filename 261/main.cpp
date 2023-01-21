#include <iostream>

using namespace std;

    void mangle ( int a[], int n){      //tao mang b chua cac so le cua mang a
        int b[100001], nb=0;
        for( int i=0; i<n; i++){
            if( a[i]%2!=0) {
                b[nb]=a[i];
                nb++;
            }
        }
        for( int i=0; i<nb; i++)
            cout<<b[i]<<" ";
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    mangle(a,n);
    return 0;
}
