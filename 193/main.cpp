#include <iostream>

using namespace std;

    bool songuyento ( int n){           //ham kiem tra 1 gia tri co la so nguyen to khong
        if( n<=1) return false;
        if( n==2) return true;
        for( int i=2; i<n; i++){
            if(n%i==0) return false;
        }
        return true;
    }

    int demphanbiet ( int a[], int n){          //ham dem xem trong mang co bao nhieu so nguyen to phan biet
        int dem(0);
        for( int i=1; i<=n; i++){
            int lap=0;
            for(int j=i+1; j<=n; j++){
                if(a[i]==a[j]){
                    lap++;
                    break;
                }
            }
            if( lap==0) {
                if( songuyento(a[i])==true) dem++;
            }
        }
        return dem;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demphanbiet(a,n);
    return 0;
}
