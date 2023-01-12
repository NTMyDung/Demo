#include <iostream>

using namespace std;
    bool dauledautien ( int x){
        while(x>9){
            x=x/10;         //vong lap lay gia tri dau tien cua so
        }
        if(x%2==1) return true;         //neu do la so le thi ham tra ve true
        return false;
    }
int main()
{
    int n, dem(0);
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        if(dauledautien(a[i])==true ) {         //neu tim dc so co chu so dau la so le thi in ra so do
            cout<<a[i];
            dem++;
            break;          //va ket thuc vong lap
        }
    }
    if(dem==0) cout<<0;         //neu khong co so thoa dk trong mang thi in ra 0

    return 0;
}
