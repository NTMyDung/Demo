#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    for( int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i],a[j]);          //sap xep mang tang dan

    float m=max(abs(a[1]),abs(a[n]));       //m lay khoang cach lon hon de chua dc dau kia

    cout<<"["<<-m<<","<<m<<"]";        // in ra doan [-x,x] chua mang

    return 0;
}
