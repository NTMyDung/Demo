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

    for( int i=1; i<n; i++){            //dao nguoc thu tu tat ca so chan trong mang
        for( int j=i+1; j<=n; j++){
            if(a[i]%2==0&&a[j]%2==0) swap(a[i],a[j]);
        }
    }


    for( int i=1; i<n; i++){            //dao nguoc thu tu tat ca so le trong mang
        for( int j=i+1; j<=n; j++){
            if(a[i]%2!=0&&a[j]%2!=0) swap(a[i],a[j]);
        }
    }

    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
