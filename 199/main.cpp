#include <iostream>

using namespace std;

    int kttoanchan ( int a[], int n){       //kiem tra mang co toan so chan khong neu co tra ve 1
        int ketqua=1;
        for( int i=1; i<=n; i++){
            if(a[i]%2!=0){          //neu ton tai so le thi tra ve 0
                ketqua=0;
                break;
            }
        }
        return ketqua;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<kttoanchan (a,n);         // goi ham
    return 0;
}
