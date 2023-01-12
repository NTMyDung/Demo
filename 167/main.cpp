#include <iostream>

using namespace std;

    float trungbinhconglonhon ( float a[], int n, float x){            //ham tinh trung binh cong cac so lon hon gia tri x trong mang
        float tong(0);
        float dem(0);
        for( int i=1; i<=n; i++){
            if(a[i]>x){
                tong+=a[i];
                dem++;
            }
        }
        return tong/dem;
    }

int main()
{
    int n;
    float x;
    float a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    cin>>x;

    cout<< trungbinhconglonhon(a,n,x);        // goi ham
    return 0;
}
