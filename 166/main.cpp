#include <iostream>

using namespace std;

    float trungbinhcong ( float a[], int n){            //ham tinh trung binh cong cac so duong trong mang
        float tong(0);
        float dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]>0){
                tong+=a[i];
                dem++;
            }
        }
        return tong/dem;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< trungbinhcong(a,n);        // goi ham
    return 0;
}
