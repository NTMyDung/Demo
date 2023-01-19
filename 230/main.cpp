#include <iostream>

using namespace std;

     void xoatrungx( float a[], int n, float x){
        int dem(0);                 //bien dem dem so gia tri trong mang trung voi x
        for( int i=n; i>=1; i--){
            if(a[i]==x) {           //duyet nguoc mang neu gap so trung voi x thi cho tat ca gia tri phia sau lui ve truoc mot vi tri
                dem++;
                for( int j=i; j<=n-dem; j++){
                    a[j]=a[j+1];
                }
            }
        }
        for( int i=1; i<=n-dem; i++){          //in ra mang khi da bo tat ca gia tri trung voi x, kich thuoc mang luc nay la n-dem
            cout<<a[i]<<" ";
        }
    }

int main()
{

    int n;
    float x;
    cin>>n>>x;
    float a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }


    xoatrungx(a,n,x);
    return 0;
}
