#include <iostream>

using namespace std;

      int giatrichanlonnhat( int a[], int n ){          //ham tim gia tri duong nho nhat trong mang
        int x;
        for(int i=1; i<=n; i++){            //vong for gan x la so chan dau tien trong mang
            if(a[i]%2==0) {
                x=a[i];
                break;
            }
        }
        for(int i=1; i<=n; i++){
            if(a[i]%2==0&&a[i]>x) x=a[i];          //duyet mang tim ra so chan lon nhat
        }
        return x;

    }



int main()
{
    int n;
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]==giatrichanlonnhat(a,n)) cout<<i<<" ";            //duyet mang in ra tat ca vi tri co gia tri chan lon nhat
    }
    return 0;
}
