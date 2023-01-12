#include <iostream>

using namespace std;
    float result( float a[10001], int n){
        float gtri=0;
        for(int i=n; i>=1; i--){        //duyet nguoc de lay phan tu cuoi cung
            if(a[i]<-1) {
                gtri=a[i];
                break;          //thoat khoi vong lap de lay duy nhat gia tri cuoi cung thoa dk be hon -1
            }
        }
        return gtri;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<result(a,n);

    return 0;
}
