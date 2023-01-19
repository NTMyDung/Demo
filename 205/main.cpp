#include <iostream>

using namespace std;

    bool ktbangnhau ( float a[], int n){        //ham kiem tra tat ca phan tu trong mang co bang nhau khong
        for(int i=2; i<=n; i++){
            if(a[i]!=a[1]) return false;
        }
        return true;
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    if( ktbangnhau(a,n)==true) cout<<"Cac phan tu cua mang bang nhau";
        else cout<<"Cac phan tu cua mang khong bang nhau";
    return 0;
}
