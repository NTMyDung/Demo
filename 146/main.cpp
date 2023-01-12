#include <iostream>

using namespace std;

    bool chusole (int n){           //ham kiem tra xem mot so co chua chi toan chu so le khong
        while (n>0){
            int x=n%10;             //bien x lan luot la tung chu so cua so n
            if(x%2==0) return false;        //neu gap chu so chan ham tra ve false
            n=n/10;
        }
        return true;
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
        if(chusole(a[i])==true) cout<<a[i]<<" ";            //duyet mang in ra tat ca gia tri chi chua chu so le
    }

    return 0;
}
