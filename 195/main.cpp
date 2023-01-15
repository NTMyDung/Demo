#include <iostream>

using namespace std;

    bool haikhong ( int a[], int n){            //kiem tra mang co hai gia tri 0 lien tiep khong
        for( int i=1; i<n; i++){
            if(a[i]==0&&a[i+1]==0) return true;
        }
        return false;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for ( int i=1; i<=n; i++){
        cin>>a[i];
    }
    if( haikhong( a,n)==true) cout<<" Mang co ton tai hai gia tri 0 lien tiep";
        else cout<<"Mang khong ton tai hai gia tri 0 lien tiep";
    return 0;
}
