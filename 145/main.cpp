#include <iostream>

using namespace std;

    bool chusodautienle ( int n){           //ham kiem tra so dau tien cua mot so co la so le khong
        while(n>9||n<-9){
            n=n/10;
        }
        if(n%2==0) return false;
        return true;
    }

    bool songuyento (int n){            //ham kiem tra 1 so co la so nguyen to khong
        if (n<=1) return false;
        if(n==2) return true;
        for(int i=2; i<n; i++){
            if(n%i==0) return false;            //neu ton tai nghiem that su thi khong phai la so nguyen to
        }
        return true;
    }

int main()
{

    int n, dem(0);
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if( songuyento(a[i])==false){
            cout<<"xin moi nhap lai, so ban nhap phai la so nguyen to";         //kiem tra tat ca so nhap vao phai la so nguyen to
            dem++;
            break;
        }
    }

    if( dem==0){
        for(int i=1; i<=n; i++){
            if(chusodautienle(a[i])==true) cout<<a[i]<<" ";            //duyet mang in ra tat ca gia tri co chu so dau tien la so le
        }
    }
    return 0;
}
