#include <iostream>

using namespace std;

    bool ktmanggiam ( float a[], int n){        //ham kiem tra trong mang co so dung trc nao nho hon so dung sau khong
        for( int i=1; i<n; i++){
            if(a[i]<a[i+1]) return false;       //neu co thi mang khong giam ham tra ve false
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

    if( ktmanggiam(a,n)==true) cout<<"Mang giam";
        else cout<<"Mang khong giam";

    return 0;
}
