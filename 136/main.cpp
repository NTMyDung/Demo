#include <iostream>

using namespace std;
    void lietke(float a[], int n){            //ham in ra cac gia tri be hon tri tuyet doi cua so dung ngay sau no va lon hon gia tri dung truoc no
        for(int i=2; i<n; i++){
            if(a[i]<abs(a[i+1])&&a[i]>a[i-1]) cout<<a[i]<<" ";
        }
    }

int main()
{
    int n;
    cin>>n;
    float a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    lietke(a,n);        //goi ham
    return 0;
}
