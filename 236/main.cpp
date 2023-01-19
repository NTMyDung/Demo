#include <iostream>

using namespace std;

     void doicho ( int a[], int n, int vitrii){          //dua mot gia tri chia het cho 3 ve dau mang khi biet vi tri cua gia tri no trong mang
        int x=a[vitrii];
        for( int i=vitrii; i>1; i--){
                a[i]=a[i-1];
            }
        a[1]=x;
    }

    void chiahetchoba( int a[], int n){         //dua tat ca gai tri 1 co trong mang ve dau su dung ham doicho o tren
        for( int i=n; i>=1; i--){
            if(a[i]%3==0) doicho(a,n,i);
        }
    }


int main()
{
    int n, dem(0);
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    chiahetchoba(a,n);
    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
