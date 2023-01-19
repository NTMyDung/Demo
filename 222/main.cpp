#include <iostream>

using namespace std;

    void taomangchanle ( int a[], int n){
        for( int i=1; i<=n; i++){
            if(a[i]%2!=0) a[i]=1;
                else a[i]=0;
            cout<<a[i]<<" ";
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    taomangchanle (a,n);
    return 0;
}
