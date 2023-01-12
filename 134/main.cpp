#include <iostream>

using namespace std;
    void lietke(int a[], int n, int x, int y){          //ham in ra cac gia tri chan trong mang thuoc [x,y] cho truoc
        for(int i=1; i<=n; i++){
            if(a[i]>=x&&a[i]<=y&&a[i]%2==0||a[i]<=x&&a[i]>=y&&a[i]%2==0) cout<<a[i]<<" ";
        }
    }

int main()
{

    int n;
    int x,y;
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cin>>x>>y;

    lietke(a,n,x,y);        //goi ham
    return 0;
}
