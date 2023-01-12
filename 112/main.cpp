#include <iostream>

using namespace std;

int main()
{
    int n, m;
    float x;
    cin>>n>>x;
    float a[1001];

    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    float khoangcach=abs(a[1]-x);       //dat linh canh la ptu dau tien cua mang
    m=1;        //m=1 tuong ung voi vi tri a[1] la linh canh

    for(int i=1; i<=n; i++){
        if(abs(a[i]-x)<khoangcach) {        // cho duyet tim khoang cach nho nhat
            khoangcach=abs(a[i]-x);
            m=i;        //ghi nhan vi tri khoang cach nho nhat trong mang
        }
    }

    cout<<a[m];         //xuat ra phan tu co kc toi x nho nhat voi vi tri m
    return 0;
}
