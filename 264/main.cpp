#include <iostream>

using namespace std;

    bool nguyento ( int x){         //ham kiem tra mot so co la so nguyen to khong
        if(x<=1) return false;
        if(x==2) return true;
        for( int i=2; i<x; i++){
            if(x%i==0) return false;
        }
        return true;
    }

    void mangnguyento ( int a[], int n){        //tao mang b chua cac so nguyen to cua mang a
        int b[10001];
        int nb=0;
        for( int i=0; i<n; i++){
            if( nguyento(a[i])==true) {
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
    mangnguyento(a,n);
    return 0;
}
