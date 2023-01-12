#include <iostream>

using namespace std;

    float tongcuctri (float a[], int n){        //ham tinh tong cac gia tri cuc tri cua mang
        float tong=a[1]+a[n];
        for( int i=2; i<n; i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1]||a[i]<a[i-1]&&a[i]<a[i+1]) tong+=a[i];
        }
        return tong;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< tongcuctri(a,n);         //goi ham
    return 0;
}
