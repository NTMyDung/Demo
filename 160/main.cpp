#include <iostream>

using namespace std;

    float tongcucdai (float a[], int n){            //ham tinh tong cac gia tri cuc dai trong mang
        float tong(0);
        if(a[1]>a[2]) tong+=a[1];
        if(a[n]>a[n-1]) tong+=a[n];
        for( int i=2; i<n; i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1]) tong+=a[i];
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

    cout<< tongcucdai(a,n);         //goi ham
    return 0;
}
