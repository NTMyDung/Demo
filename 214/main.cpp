#include <iostream>

using namespace std;

    void sapxeptangdan ( int a[], int n){        //ham sap xep mang theo thu tu tang dan
        for( int i=1; i<=n; i++){
            for( int j=i+1; j<=n; j++){
                if( a[i]>a[j]) swap(a[i],a[j]);
            }
        }
    }
int main()
{
    int n, m, dem(0);
    cin>>m;
    int a[10001];
    for( int i=1; i<=m; i++)
        cin>>a[i];


    cin>>n;
    int b[10001];
    for( int i=1; i<=n; i++)
        cin>>b[i];
    if(m!=n) cout<<"b khong la hoan vi cua a";
        else{
        sapxeptangdan(a, m);
        sapxeptangdan(b, n);
        for(int i=1; i<=n; i++){
            if(a[i]!=b[i]){
                cout<<"b khong la hoan vi cua mang a";
                dem++;
                break;
                }
            }
        if(dem==0) cout<<"b la hoan vi cua mang a";
        }
    return 0;
}
