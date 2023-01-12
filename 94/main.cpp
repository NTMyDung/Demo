#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++) // nhap mang
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if( a[i]%2==0) {    // neu ptu chia het cho 2
            cout<<i;        // xuat ra vi tri ptu trong mang
            break;          // thoat khoi vong lap
        }
    return 0;
}
