#include <iostream>

using namespace std;

    bool ktchanle ( int a[], int n){            //ham kiem tra xem trong mang co hai so lien tiep nao cong lai voi nhau la so chan khong
        for( int i=1; i<n; i++){
            if((a[i]+a[i+1])%2==0) return false;        //neu co thi mang khong co tinh chan le
        }
        return true;
    }

int main()
{
    int n;
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    if( ktchanle(a,n)==true) cout<<"Mang a co tinh chan le";
        else cout<<"Mang a khong co tinh chan le";
    return 0;
}
