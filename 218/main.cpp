#include <iostream>

using namespace std;

    void sapxeptang ( float a[], int m){        //ham sap xep mang theo thu tu tang dan
        for( int i=1; i<=m; i++){
            for( int j=i+1; j<=m; j++){
                if( a[i]>a[j]) swap(a[i],a[j]);
            }
        }
    }

    void tronmang ( float a[], int m, float b[], int n ){       //ham tron 2 mang a va b va in ra theo thu tu tang dan
        sapxeptang( a,m);           //sap xep mang a tang dan
        sapxeptang( b,n);           //sap xep mang b tang dan
        int i=1, j=1;
        while(i<=m && j<=n){
            if(a[i]<b[j]) {         //di so sanh lan luot cac phan tu tu dau mang va in ra gia tri nao nho hon
                cout<<a[i]<<" ";
                i++;
            }
                else {
                    cout<<b[j]<<" ";
                    j++;
                }
        }
        if( i>m) {              //neu het mang a thi in ra tat ca gia tri con lai cua mang b
            while ( j<=n){
                cout<<b[j]<<" ";
                j++;
            }
        }
        else {                  //nguoc lai, neu het mang b thi in ra tat ca gia tri con lai cua mang a
            while( i<=m ){
                cout<<a[i]<<" ";
                i++;
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

    tronmang(a,m,b,n);          //goi ham
    return 0;
}
