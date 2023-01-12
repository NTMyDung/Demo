#include <iostream>

using namespace std;

     float tong ( float a[], int &n){       //ham tinh tong cac gia tri lon hon tri tuyet doi cua gia tri ngay sau no
        float x=0;
        for( int i=1; i<n; i++){
            if(a[i]>abs(a[i+1])) x= x + a[i];
        }
        return x;

    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< tong(a,n);       //goi ham

    return 0;
}
