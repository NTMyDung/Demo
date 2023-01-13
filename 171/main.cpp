#include <iostream>

using namespace std;

    int demchiahetbay ( int a[], int n){      //ham dem so luong so duong chia het cho 7 co trong mang
        int dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]%7==0&&a[i]>0) dem++;
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
    cout<<demchiahetbay(a,n);         //goi ham
    return 0;
}
