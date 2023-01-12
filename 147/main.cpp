#include <iostream>

using namespace std;

    void lietkesodang3k ( int a[], int n){      //ham in ra cac so co dang 3^k trong mang
        int dem(0);
        for(int i=1; i<=n; i++){
            int k=a[i];
            while (k!=0&&k%3==0){       //mot so x dang 3^k thi x=3.3.3....3.3 nen khi chia 3 den cuoi cung thi x=1
                k=k/3;
            }
            if(k==1) {
                cout<<a[i]<<" ";
                dem++;
            }
        }
        if(dem==0) cout<<0;         //neu mang khong co so dang do thi in ra 0
    }


int main()
{
    int n;
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    lietkesodang3k(a,n);        //goi ham

    return 0;
}
