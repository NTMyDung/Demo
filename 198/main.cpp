#include <iostream>

using namespace std;

    bool hoanthien ( int n){        //kiem tra xem mot so co la so hoan thien khong
        int x=0;
        for( int i=1; i<n; i++){
            if( n%i==0) x+=i;
        }
        if(x==n) return true;
            else return false;
    }

    int kttinhchat ( int a[], int n){       //ham kiem tra tinh chat "mang khong co so hoan thien nao lon hon 256"
        int k=1;
        for( int i=1; i<=n; i++){
            if(a[i]>256 && hoanthien(a[i])==true) {
                k--;
                break;
            }
        }
        return k;               //neu thoa tinh chat thi tra ve 1, khong thoa tra ve 0
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<kttinhchat (a,n);         // goi ham
    return 0;
}
