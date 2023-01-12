#include <iostream>
#include <math.h>
using namespace std;

    int tongchinhphuong ( int a[], int n){          //ham tinh tong cac so chinh phuong trong mang
        int tong(0);
        for( int i=1; i<=n; i++){
            int x=sqrt(a[i]);
            if(x*x==a[i]) tong+=a[i];
        }
        return tong;
    }

int main()
{
    int n;
    int a[10001];
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<< tongchinhphuong(a,n);        //goi ham
    return 0;
}
