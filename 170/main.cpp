#include <iostream>

using namespace std;

    int demchan ( int a[], int n){      //ham dem so luong so chan co trong mang
        int dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]%2==0) dem++;
        }
        return dem;
    }

int main()
{
    int n, a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demchan(a,n);         //goi ham
    return 0;
}
