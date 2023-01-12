#include <iostream>

using namespace std;

    long tongdoixung ( int a[], int n){         //ham tinh tong cac so doi xung trong mang
        long tong=0;
        for( int i=1; i<=n; i++){
            int x=a[i];
            int songuoc=0;
            while (x>0){
                songuoc=songuoc*10+x%10;            //so nguoc luu nguoc gia tri cua a[i]
                x=x/10;
            }
            if(abs(a[i])==songuoc) tong+=a[i];      //kiem tra a[i] co la so doi xung khong
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

    cout<< tongdoixung(a,n);        // goi ham
    return 0;
}
