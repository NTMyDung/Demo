#include <iostream>

using namespace std;

    int demcuctri ( float a[], int n){      //ham dem so cuc tri co trong mang
        int dem=2;
        for(int i=2; i<n; i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1]||a[i]<a[i-1]&&a[i]<a[i+1]) dem++;
        }
        return dem;
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demcuctri(a,n);         //goi ham
    return 0;
}
