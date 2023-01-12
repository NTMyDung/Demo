#include <iostream>

using namespace std;
    void lietke(float a[], int n){          //ham in ra cac gia tri am trong mang
        for(int i=1; i<=n; i++){
            if(a[i]<0){
                cout<<a[i]<<" ";
            }
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

    lietke( a,n);       //goi ham
    return 0;
}
