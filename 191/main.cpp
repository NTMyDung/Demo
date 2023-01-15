#include <iostream>

using namespace std;

    int xuathien ( int a[], int n, float x){       //ham kiem tra 1 so xuat hien bao nhieu lan
        int solan(0);
        for( int i=1; i<=n; i++){
            if( a[i]==x) solan++;
        }
        return solan;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    int xhnhieunhat=xuathien(a,n,a[1]);            //cho so dau tien trong mang la so xh nhieu nhat
    int giatri=a[1];
    for( int i=2; i<=n; i++ ){
        int m=xuathien(a,n,a[i]);
        if(m>xhnhieunhat) {                     // duyet mang neu gap so nao xuat hien nhieu hon thi xhnhieunhat mang so lan so
            xhnhieunhat=m;
            giatri=a[i];
        }
    }
    cout<<giatri;
    return 0;
}
