#include <iostream>

using namespace std;

     void lietke(float a[], int n){            //ham in ra cac gia tri chan co it nhat 1 lan can trai dau voi no
        for(int i=0; i<n; i++){
            if((a[i]*a[i-1])<0||a[i]*a[i+1]<0) cout<<a[i]<<" ";
        }
    }


int main()
{
    int n;
    cin>>n;
    float a[1001];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    lietke(a,n);        //goi ham

    return 0;
}
