#include <iostream>

using namespace std;

    void lietke(float a[], int n, float x, float y){            //ham in ra cac gia tri thuoc [x,y] cho truoc
        for(int i=1; i<=n; i++){
            if(a[i]>=x&&a[i]<=y||a[i]<=x&&a[i]>=y) cout<<a[i]<<" ";
        }
    }

int main()
{
    int n;
    float x,y;
    cin>>n;
    float a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cin>>x>>y;

    lietke(a,n,x,y);            //goi ham
    return 0;
}
