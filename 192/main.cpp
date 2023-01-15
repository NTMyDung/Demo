#include <iostream>

using namespace std;

    int xuathien ( int a[], int n, float x){       //ham kiem tra 1 so xuat hien bao nhieu lan
        int solan(0);
        for( int i=1; i<=n; i++){
            if( a[i]==x) solan++;
        }
        return solan;
    }

    int xuathiennhieunhat (int a[], int n){           //ham tim xem gia tri xuat hien nhieu nhat trong mang la bao nhieu lan
        int solannhieunhat=0;
        int k;
        for( int i=1; i<=n; i++){
            k= xuathien(a,n,a[i]);
            if( k > solannhieunhat) solannhieunhat=k;
        }
        return k;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    int m=xuathiennhieunhat(a,n);
    for( int i=1; i<=n; i++ ){          //duyet mang
        int lap=0;
        for(int j=i+1; j<=n; j++){
            if(a[i]==a[j]){             //neu gap gia tri ma dang sau van con gia tri bang no thi bo qua
                lap++;
                break;
            }
        }
        if(lap==0){                 //neu gap gia tri dang sau khong con gia tri bang no thi kiem tra xem so lan xuat hien cua no co bang so lan gia tri xuat hien nhieu nhat cua mang khong
            if( xuathien (a,n,a[i])==m) cout<<a[i]<<" ";        //bang thi in ra gia tri do
        }
    }
    return 0;
}
