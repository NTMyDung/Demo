#include <iostream>

using namespace std;
    float giatriamdautien( float a[], int n ){          //ham tim gia tri am dau tien trong mang
        for(int i=1; i<=n; i++){
            if(a[i]<0) return a[i];
        }
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]==giatriamdautien(a,n)) cout<<i<<" ";            //duyet mang in ra tat ca vi tri co gia tri bang gia tri am dau tien trong mang
    }

    return 0;
}
