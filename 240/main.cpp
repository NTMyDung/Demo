#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];

    }

    int x=a[n];                 //dich trai xoay vong cac ptu mang
    for( int i=n; i>=1; i--){
       a[i]=a[i-1];
    }
    a[1]=x;

    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
