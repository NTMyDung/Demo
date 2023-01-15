#include <iostream>

using namespace std;

    int tontaikhong ( int a[], int n){          //kiem tra mang co ton tai gia tri 0 khong
        int dem(0);
        for( int i=1; i<=n; i++){
            if( a[i]==0) {
                dem++;
                break;
            }
        }
        return dem;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    cout<<tontaikhong(a,n);
    return 0;
}
