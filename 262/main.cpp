#include <iostream>

using namespace std;

    void mangam ( float a[], int n){        //tao mang b chua cac so am cua mang a
        float b[10001];
        int nb=0;
        for( int i=0; i<n; i++){
            if( a[i]<0) {
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
    float a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    mangam(a,n);
    return 0;
}
