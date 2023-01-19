#include <iostream>
#include <windows.h>

using namespace std;

    void textcolor(int x){          //ham to mau
        HANDLE mau;
        mau = GetStdHandle
            (STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(mau, x);
    }

    void XuatChanVangLeTrang(int a[], int n)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0)       //so chan thi in ra mau vang
            {
                textcolor(14);
                cout<<a[i]<<" ";
            }
            else
            {
                textcolor(15);      //so le in ra mau trang
                cout<<a[i]<<" ";
            }
        }
    }


int main()
{
    int n;
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];

    }

    XuatChanVangLeTrang(a,n);

    return 0;
}
