#include <iostream>

using namespace std;
    bool sodang2k( int n){
        while(n%2==0&& n!=0){       // ta phan tich thua so nguyen to bang cach chia cho 2 khi con co the
            n=n/2;
        }
        if(n==1) return true;           //neu n co dang 2^k thi khi phan tich den cuoi cung n=1 vi 2^k=2.2.2.2...2
        return false;           //neu khong thi n se la mot so le khac 1.
    }
int main()
{
    int n, dem(0);
    cin>>n;
    int a[1001];
    for( int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++){
        if(sodang2k(a[i])==true){           //neu tim dc so co dang 2^k thi in ra man hinh
            cout<<a[i];
            dem++;
            break;
        }
    }
    if(dem==0) cout<<0;
    return 0;
}
