#include <iostream>

using namespace std;

    float khoangcachtb ( float a[], int n){         //ham tinh khoang cach trung binh cua cac phan tu trong mang
        float khoangcach=0;
        float dem=0;
        for( int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++){
                    khoangcach+=abs(a[i]-a[j]);
                    dem++;
                }
        return khoangcach/dem;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< khoangcachtb (a,n);        // goi ham
    return 0;
}
