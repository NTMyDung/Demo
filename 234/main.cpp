#include <iostream>

using namespace std;

    void doicho ( int a[], int n, int vitrii){          //dua mot gia tri mot ve dau mang khi biet vi tri cua gia tri 1 trong mang
        for( int i=vitrii; i>1; i--){
                a[i]=a[i-1];
            }
        a[1]=1;
    }

    void motvedau( int a[], int n){         //dua tat ca gai tri 1 co trong mang ve dau su dung ham doicho o tren
        for( int i=n; i>=1; i--){
            if(a[i]==1) doicho(a,n,i);
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
    motvedau(a,n);
    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
