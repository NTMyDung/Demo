#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, dem(0);
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    sort (a+1, a+n+1);      //sap xep mang tang dan de tim gia tri le nho nhat cua mang

    for(int i=1; i<=n; i++){
        if(a[i]%2!=0){          //tim duoc so le nho nhat trong mang
            cout<<a[i]-1;       // in ra so chan nho hon no 1 don vi
            break;          //ket thuc vong lap de chi in ra 1 gia tri
        }
    }
    return 0;
}
