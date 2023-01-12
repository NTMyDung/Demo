#include <iostream>

using namespace std;

    void lietkeam ( float a[], int n){          //ham liet ke tat ca gia tri am trong mang
        for(int i=1; i<=n; i++){
            if(a[i]<0) cout<<a[i]<<" ";
        }
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    lietkeam(a,n);          // goi lai ham
    return 0;
}
