#include <iostream>

using namespace std;
    bool soganh( int x){
        int m=x, k=0;
       while(x>0){
            k=k*10+x%10;        //bien k de luu nguoc gia tri cua x
            x=x/10;
        }
        if(k==m) return true;       //neu so da dao nguoc bang so ban dau thi dung
            else return false;
    }

int main()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++){
        if(soganh(a[i])==true) {            //neu duyet mang tim duoc so ganh thi xuat ra
            cout<<a[i];
            break;          //va ket thuc vong lap
        }
    }

    return 0;
}
