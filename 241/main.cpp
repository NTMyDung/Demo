#include <iostream>

using namespace std;

    void dichphai(int a[],int n, int k){
         if (k>0){
           int tmp=a[1];
           for (int i=1;i<n;i++) a[i]=a[i+1];
           a[n]=tmp;
           dichphai(a,n,k-1);
         }
    }

int main()
{
    int n, k;
    cin>>n>>k;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];

    }

    dichphai(a,n,k);
    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

