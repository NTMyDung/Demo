#include <iostream>

using namespace std;

    bool dauchan ( int n){           //ham kiem tra so dau tien cua mot so co la so chan khong
        while(n>9||n<-9){
            n=n/10;
        }
        if(n%2==0) return true;
        return false;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
            if(dauchan(a[i])==true) cout<<a[i]<<" ";            //duyet mang in ra tat ca gia tri co chu so dau tien la so chan
        }

    return 0;
}
