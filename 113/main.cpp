#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i],a[j]);          //sap xep mang tang dan

    cout<<"["<<a[1]<<","<<a[n]<<"]";        //doan chua tat ca ptu cua mng la doan tu gia tri dau( nho nhat) den gia tri cuoi (lon nhat) cua mang

    return 0;
}
