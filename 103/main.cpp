#include <iostream>

using namespace std;

int main()
{
    int n, dem(0);
    float a[10001];
    cin>>n;
    for(int i=1; i<=n; i++)     //nhap mang
        cin>>a[i];

    for( int i=n; i>=1; i--)    //duyet mang tu phai sang trai de tim gt duong cuoi cung trong mang
        if(a[i]>0) {            //dieu kien so duong
            cout<<a[i];     //xuat ra so duong cuoi cung trong mang
            dem++;          //bien dem tang len cho thay ci ton tai so duong trong mang
            break;          //ket thuc vong lap khi tim dc so duong dau tien
        }
    if(dem==0) cout<<-1;        //neu mang khong co so duong thi cout -1
    return 0;
}
