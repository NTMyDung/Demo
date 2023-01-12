#include <iostream>

using namespace std;

    float gannhaunhat ( float a[], int n){      //ham tim khoang cach nho nhat cua 2 so trong mang
        float kc=abs(a[1]-a[2]);
        for( int i=1; i<n; i++){
            for( int j=i+1; j<=n; j++){
                if(abs(a[i]-a[j])<kc) kc=abs(a[i]-a[j]);
            }
        }
        return kc;
    }

int main()
{

    int n;
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for( int i=1; i<n; i++){
            for( int j=i+1; j<=n; j++){
                if(abs(a[i]-a[j])==gannhaunhat(a,n)&&a[i]<a[j]) cout<<"("<<a[i]<<","<<a[j]<<") ";
                if(abs(a[i]-a[j])==gannhaunhat(a,n)&&a[i]>a[j]) cout<<"("<<a[j]<<","<<a[i]<<") ";       //in ra cac cap gia tri co khoang cach bang khoang cach nho nhat
            }
        }
    return 0;
}
