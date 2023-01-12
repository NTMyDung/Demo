#include <iostream>
#include <algorithm>
using namespace std;
    bool chusole( int n){
        while( n>0){
            int x=n%10;         //bien x lay ra chu so cuoi cung cua x
            if(x%2==0) return false;        //neu chu so chan thi ham tra ve false
            n=n/10;         //bo di chu so cuoi cung cua n de lay chu so tiep theo
        }
        return true;
    }

int main()
{
    int n, dem(0);
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    sort (a+1, a+n+1);      //sap xep mang tang dan de tim dc so lon nhat thoa dieu kien nhanh nhat

    for(int i=n; i>=1; i--){
        if(chusole(a[n])==true){        //neu tim dc so chua toan chu so le thi in ra man hinh
            cout<<a[i];
            dem++;
            break;          //ket thuc vong lap de in 1 gia tri
        }
    }
    if(dem==0) cout<<0;
    return 0;
}
