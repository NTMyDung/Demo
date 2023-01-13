#include <iostream>

using namespace std;

    bool sohoanthien ( int x){          //ham kiem tra xem 1 so co la so hoan thien khong
        if(x<=1) return false;
        int tongnghiem(0);
        for( int i=1; i<x; i++){
            if(x%i==0) tongnghiem+=i;
        }
        if(tongnghiem==x) return true;      //x la so hoan thien khi tong cac nghiem nho hon x bang x
            else return false;
    }

    int demsohoanthien ( int a[], int n){           //ham dem so hoan thien co trong mang
        int dem(0);
        for( int i=1; i<=n; i++){
            if(sohoanthien(a[i])==true) dem++;
        }
        return dem;

    }

int main()
{

    int n, a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demsohoanthien (a,n);         //goi ham
    return 0;
}
