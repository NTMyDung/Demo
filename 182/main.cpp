#include <iostream>

using namespace std;

    int demgiatri ( float a[], int n){        //ham dem so luong cac phan tu ke nhau cung dau va tri tuyet doi so dung sau lon hon so dung trc
        int dem(0);
        for( int i=1; i<n; i++){
            if( a[i]*a[i+1]>0&&abs(a[i+1])>abs(a[i])) dem++;
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
    cout<<demgiatri(a,n);         //goi ham
    return 0;
}
