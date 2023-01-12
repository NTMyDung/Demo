#include <iostream>

using namespace std;

int main()
{
    int n, m;
    float x, khoangcach(0);
    cin>>n>>x;
    float a[1001];

    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(abs(a[i]-x)>khoangcach) {        // cho duyet tim khoang cach lon nhat
            khoangcach=abs(a[i]-x);
            m=i;        //ghi nhan vi tri khoang cach lon nhat trong mang
        }
    }

    cout<<a[m];         //xuat ra phan tu co kc toi x lon nhat voi vi tri m

    return 0;
}
