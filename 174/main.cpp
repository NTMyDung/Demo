#include <iostream>

using namespace std;

     int demtancung ( int a[], int n){      //ham dem so luong gia tri co chu so cuoi cung bang 5
        int dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]%10==5||a[i]%10==-5) dem++;
        }
        return dem;
    }


int main()
{
    int n, a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demtancung (a,n);         //goi ham
    return 0;
}
