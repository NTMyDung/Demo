#include <iostream>

using namespace std;

     int tuongquanchanle ( int a[], int n){      //ham so sanh cho thay tuong quan so luong chan le
        int chan(0);
        int le(0);
        for( int i=1; i<=n; i++){
            if(a[i]%2==0) chan++;
                else le++;
        }
        if(chan>le) return -1;
        if(chan<le) return 1;
        if(chan==le) return 0;
    }

int main()
{
    int n, a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<tuongquanchanle(a,n);         //goi ham
    return 0;
}
