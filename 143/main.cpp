#include <iostream>

using namespace std;

     float giatriduongnhonhat( float a[], int n ){          //ham tim gia tri duong nho nhat trong mang
        float x;
        for(int i=1; i<=n; i++){            //vong for gan x la so duong dau tien trong mang
            if(a[i]>0) {
                x=a[i];
                break;
            }
        }
        for(int i=1; i<=n; i++){
            if(a[i]>0&&a[i]<x) x=a[i];          //duyet mang tim ra so duong nho nhat
        }
        return x;

    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]==giatriduongnhonhat(a,n)) cout<<i<<" ";            //duyet mang in ra tat ca vi tri co gia tri bang gia tri duong nho nhat trong mang
    }
    return 0;
}
