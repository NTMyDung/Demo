#include <iostream>

using namespace std;

    bool ktdangsong ( float a[], int n){            //kiem tra mang co dang song khong
        for( int i=2; i<n; i++){
            if(a[i]<a[i+1]&& a[i]>a[i-1]|| a[i]>a[i+1]&&a[i]<a[i-1]) return false;
        }
        return true;
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    if( ktdangsong(a,n)==true) cout<<"Cac phan tu trong mang co dang song";         //goi ham

        else cout<<"Cac phan tu cua mang khong co dang song";
    return 0;
}
