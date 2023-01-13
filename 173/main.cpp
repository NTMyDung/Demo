#include <iostream>

using namespace std;

     int tanxuat ( float a[], int n, float x){      //ham dem so luong gia tri bang x co trong mang
        int dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]==x) dem++;
        }
        return dem;
    }

int main()
{
    int n;
    float x, a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cin>>x;

    cout<<tanxuat(a,n,x);         //goi ham
    return 0;
}
