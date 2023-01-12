#include <iostream>

using namespace std;

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for(int i=1; i<=n; i++)     //nhap mang
        cin>>a[i];

    float gtnn=a[1];        //linh canh la so dau tien cua mang

    for( int i=2; i<=n; i++)
        if(a[i]<gtnn) gtnn=a[i];        // duyet mang tim gtnn trong mang

    cout<<gtnn;         //xuat gtnn
    return 0;
}
