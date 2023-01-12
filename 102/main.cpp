#include <iostream>

using namespace std;

int main()
{
    int n, dem(0);
    float a[10001];
    cin>>n;
    for(int i=1; i<=n; i++)     //nhap mang
        cin>>a[i];

    for( int i=1; i<=n; i++)
        if(a[i]<0) {
            cout<<a[i];     // duyet mang tim gt am dau tien trong mang
            dem++;          //bien dem tang len cho thay ci ton tai so am trong mang
            break;          //ket thuc vong lap khi tim dc so am dau tien
        }
    if(dem==0) cout<<-1;        //neu mang khong co so am thi cout -1
    return 0;
}
