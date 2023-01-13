#include <iostream>

using namespace std;

    int demphanbiet ( float a[], int n){        //ham dem so gia tri phan biet trong mang
        int dem=0;
        for( int i=1; i<=n; i++){
            int m=1;
            for( int j=i+1; j<=n; j++){
                if(a[i]==a[j]){
                    m=0;
                    break;
                }
            }
            if(m==1) dem++;
        }
        return dem;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demphanbiet(a,n);         //goi ham
    return 0;
}
