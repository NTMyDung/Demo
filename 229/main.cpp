#include <iostream>
#include <math.h>
using namespace std;

    bool sochinhphuong( int x){         //ham kiem tra mot so co la so chinh phuong khong
        int m=sqrt(x);
        if(m*m==x) return true;
            else return false;
    }

     void xoachinhphuong( int a[], int n){
        int dem(0);                     //bien dem dem so chinh phuong co trong mang
        for( int i=n; i>=1; i--){
            if(sochinhphuong(a[i])==true) {           //duyet nguoc mang neu gap so chinh phuong thi cho tat ca gia tri phia sau lui ve truoc mot vi tri
                dem++;
                for( int j=i; j<=n-dem; j++){
                    a[j]=a[j+1];
                }
            }
        }
        for( int i=1; i<=n-dem; i++){          //in ra mang khi da bo tat ca so chinh phuong, kich thuoc mang luc nay la n-dem
            cout<<a[i]<<" ";
        }
    }
int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    xoachinhphuong(a,n);
    return 0;
}
