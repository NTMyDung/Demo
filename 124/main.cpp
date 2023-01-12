#include <iostream>
#include <algorithm>
using namespace std;
    bool sodang5k( int n){
        while(n%5==0&& n!=0){           // ta phan tich thua so nguyen to bang cach chia cho 5 khi con co the
            n=n/5;
        }
        if(n==1) return true;       //neu n co dang 5^k thi khi phan tich den cuoi cung n=1 vi 5^k=5.5.5.5....5.5
        return false;       //neu khong thi n se la mot so le khac 1.
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
        if(sodang5k(a[n])==true){        //neu tim dc so co dang 5^k thi in ra man hinh
            cout<<a[i];
            dem++;
            break;          //ket thuc vong lap de in 1 gia tri
        }
    }
    if(dem==0) cout<<0;

    return 0;
}
