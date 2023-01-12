#include <iostream>
#include <math.h>
using namespace std;

     bool chinhphuong(int n){           //ham kiem tra xem 1 so co la so chinh phuong khong
        int m=sqrt(n);
        if(m*m==n) return true;
        return false;
    }

int main()
{

    int n;
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

     for(int i=1; i<=n; i++){
        if(chinhphuong(a[i])==true) cout<<i<<" ";          //duyet mang gap so chinh phuong thi in ra vi tri i cua no
    }

    return 0;
}
