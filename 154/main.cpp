#include <iostream>

using namespace std;

    float tong( float a[], int n){      //ham tinh tong cac phan tu trong mang
        float x=0;
        for(int i=1; i<=n; i++)
            x+=a[i];
        return x;
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<tong(a,n);        // goi ham
    return 0;
}
