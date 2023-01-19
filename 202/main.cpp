#include <iostream>

using namespace std;

    bool ktmangtang ( float a[], int n){            //ham kiem tra trong mang co so dung truoc nao lon hon so dung sau k
        for( int i=1; i<n; i++){
            if(a[i]>a[i+1]) return false;       //neu co thi mang khong tang ham tra ve false
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

    if( ktmangtang(a,n)==true) cout<<"Mang tang";
        else cout<<"Mang khong tang";
    return 0;
}
