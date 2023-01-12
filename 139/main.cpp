#include <iostream>

using namespace std;
     void lietkevitrilonnhat (float a[], int n){         //ham in ra cac vi tri la cac gia tri lon nhat
        float giatrilonnhat=a[1];
        for(int i=2; i<=n; i++){
            if(a[i]>giatrilonnhat)
                giatrilonnhat=a[i];         //tim gia tri lon nhat trong mang
        }

        for(int i=1; i<=n; i++){
            if(a[i]==giatrilonnhat)
                cout<<i<<" ";           //in ra cac vi tri cua cac gia tri lon nhat trong mang
        }
    }


int main()
{
    int n;
    cin>>n;
    float a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    lietkevitrilonnhat(a,n);        //goi ham
    return 0;
}
