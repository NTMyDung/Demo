#include <iostream>

using namespace std;

    void lietke(int a[], int n){            //ham in ra cac gia tri chan co it nhat 1 lan can cung la chan
        for(int i=0; i<n; i++){
            if(a[i]%2==0&&a[i-1]%2==0||a[i]%2==0&&a[i+1]%2==0) cout<<a[i]<<" ";
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    lietke(a,n);        //goi ham


    return 0;
}
