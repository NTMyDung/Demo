#include <iostream>

using namespace std;

    bool songuyento ( int x){
        if( x<=1) return false;
        if( x==2) return true;
        for( int i=2; i<x; i++){
            if( x%i==0) return false;
        }
        return true;
    }

    void xoanguyento( int a[], int n){
        int dem(0);                     //bien dem dem so nguyen to co trong mang
        for( int i=n; i>=1; i--){
            if(songuyento(a[i])==true) {           //duyet nguoc mang neu gap so nguyento thi cho tat ca gia tri phia sau lui ve truoc mot vi tri
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

    xoanguyento(a,n);
    return 0;
}
