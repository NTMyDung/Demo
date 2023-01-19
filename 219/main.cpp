#include <iostream>

using namespace std;

    bool tangdan ( float a[], int m){        // kiem tra mang co theo thu tu tang dan khong
        for( int i=1; i<m; i++){
           if(a[i]>a[i+1]) return false;
        }
        return true;
    }

    void tronmanggiamdan ( float a[], int m, float b[], int n ){       //ham tron 2 mang a va b va in ra theo thu tu giam dan
        int i=m, j=n;
        while(i>=1 && j>=1){
            if(a[i]>b[j]) {         //di so sanh lan luot cac phan tu cuoi mang ve dau mang va in ra gia tri nao lon hon
                cout<<a[i]<<" ";
                i--;
            }
                else {
                    cout<<b[j]<<" ";
                    j--;
                }
        }
        if( i<1) {              //neu het mang a thi in ra tat ca gia tri con lai cua mang b
            while ( j>=1){
                cout<<b[j]<<" ";
                j--;
            }
        }
        else {                  //nguoc lai, neu het mang b thi in ra tat ca gia tri con lai cua mang a
            while( i>=1 ){
                cout<<a[i]<<" ";
                i--;
            }
        }
    }


int main()
{
    int m;
    cin>>m;
    float a[10001];
    for( int i=1; i<=m; i++)
        cin>>a[i];

    int n;
    cin>>n;
    float b[10001];
    for( int i=1; i<=n; i++)
        cin>>b[i];
    if(tangdan(a,m)==false|| tangdan(b,n)==false) cout<<"Nhap sai hay nhap mang tang dan.";
        else
            tronmanggiamdan(a,m,b,n);          //goi ham
    return 0;
}
