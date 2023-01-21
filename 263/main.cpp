#include <iostream>

using namespace std;

    void mangb ( float a[], int n){         //tao mang b tu mang a với b[i] = tổng các phần tử lân cận với a[i]
        float b[10001];
        for( int i=0; i<n; i++){
            if(i==0) {
                b[i]=a[i+1];
            }
            if( i==n-1){
                b[n-1]=a[n-2];
            }

            if( i>0 && i<n-1 ) {
                b[i]=a[i-1]+a[i+1];
            }
        }
        for( int i=0; i<n; i++)
            cout<<b[i]<<" ";
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    mangb(a,n);
    return 0;
}
