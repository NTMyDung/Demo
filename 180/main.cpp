#include <iostream>

using namespace std;

    int demkechan ( int a[], int n){        //ham dem so luong cac phan tu ke nhau va deu chan
        int dem(0);
        for( int i=1; i<n; i++){
            if( a[i]%2==0&& a[i+1]%2==0) dem++;
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
    cout<<demkechan(a,n);         //goi ham
    return 0;
}
