#include <iostream>

using namespace std;

    long tongdauchan( int a[], int n){      //ham tinh tong cac gia tri co chu so dau tien la chu so chan
        long tong=0;
        for(int i=1; i<=n; i++){
            int x=a[i];
            while( x>9||x<-9){      //vong lap de lay duoc x bang chu so dau tien cua a[i]
                x=x/10;
            }
            if(x%2==0) tong+=a[i];      //neu chu so dau tien chan thi cong a[i] vao tong
        }
        return tong;
    }

int main()
{
    int n;
    int a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< tongdauchan(a,n);        // goi ham
    return 0;
}
