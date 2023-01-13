#include <iostream>

using namespace std;

    int demtraidau ( float a[], int n){        //ham dem so luong cac phan tu ke nhau va trai dau nhau
        int dem(0);
        for( int i=1; i<n; i++){
            if( a[i]*a[i+1]<0) dem++;
        }
        return dem;
    }


int main()
{
    int n;
    float a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demtraidau(a,n);         //goi ham
    return 0;
}
