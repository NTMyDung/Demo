#include <iostream>

using namespace std;

    float tongduong( float a[], int n){     //ham tinh tong cac phan tu duong trong mang
        float x=0;
        for(int i=1; i<=n; i++)
            if(a[i]>0) x+=a[i];
        return x;
    }


int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<tongduong(a,n);       //goi ham

    return 0;
}
