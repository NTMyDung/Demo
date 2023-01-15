#include <iostream>

using namespace std;

    bool ktdoixung ( float a[], int n ){
        for( int i=0; i<=n/2; i++){
            if( a[i]!= a[n-1-i]) return false;
        }
        return true;
    }

int main()
{
    int n;
    cin>>n;
    float a[100001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }

    if (ktdoixung(a,n)==true) cout<<"Mang co doi xung";
        else cout<<"Mang khong doi xung";
    return 0;
}
