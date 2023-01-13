#include <iostream>

using namespace std;

    bool nguyento( int n){          //ham kiem tra xem mot so co la so nguyen to khong
        if(n<=1) return false;
        if(n==2) return true;
        for( int i=2; i<n; i++){
            if(n%i==0) return false;
        }
        return true;
    }

    int demnguyento ( int a[], int n){          //ham dem trong mang co bao nhieu so nguyen to
        int dem(0);
        for( int i=1; i<=n; i++){
            if(nguyento(a[i])==true) dem++;
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
    cout<<demnguyento (a,n);         //goi ham
    return 0;
}
