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

    int tontainguyento ( int a[], int n){       //ham kiem tr xem trong mang co so nguyen to khong, neu co tra ve 1 khong tra ve khong
        int nguyento=0;
        for( int i=1; i<=n; i++){
            if( songuyento(a[i])==true) {
                nguyento++;
                break;
            }
        }
        return nguyento;
    }


int main()
{
     int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<tontainguyento (a,n);         // goi ham
    return 0;
}
