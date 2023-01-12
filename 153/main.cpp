#include <iostream>

using namespace std;
    bool nguyento(int n){           //ham kiem tra xem 1 so co la so nguyen to khong
        if(n==1) return false;
        if(n==2) return true;
        for(int i=2; i<n; i++){
            if(n%i==0) return false;        //neu co nghiem thuc su( khac 1 va chinh no) thi ham tra ve false
        }
        return true;
    }

int main()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

     for(int i=1; i<=n; i++){
        if(nguyento(a[i])==true) cout<<i<<" ";          //duyet mang gap so nguyen to thi in ra vi tri i cua no
    }

    return 0;
}
