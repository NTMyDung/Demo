#include <iostream>

using namespace std;

    int tontaichan ( int a[], int n){           //ham kiem tra xem mang co ton gia gia tri chan khong
        int chan(0);
        for( int i=1; i<=n; i++){
            if(a[i]%2==0){
                chan++;
                break;
            }
        }
        return chan;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<tontaichan (a,n);         // goi ham
    return 0;
}
