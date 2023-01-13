#include <iostream>

using namespace std;

    int demlonnhat ( float a[], int n){         //ham dem so luong gia tri lon nhat trong mang
        float lonnhat=a[1];
        int dem(0);
        for( int i=2; i<=n; i++){
            if(a[i]>lonnhat) lonnhat=a[i];          // tim gia tri lon nhat trong mang
        }
        for( int i=1; i<=n; i++){
            if(a[i]==lonnhat) dem++;            //dem so lan gia tri lon nhat xuat hien
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
    cout<<demlonnhat(a,n);         //goi ham
    return 0;
}
