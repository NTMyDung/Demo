#include <iostream>

using namespace std;

    float trungbinhnhan ( float a[], int n){            //ham tinh trung binh tich cac so lon hon 0 trong mang
        float tich(1);
        float dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]>0){
                tich*=a[i];
                dem++;
            }
        }
        return tich/dem;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< trungbinhnhan (a,n);        // goi ham
    return 0;
}
