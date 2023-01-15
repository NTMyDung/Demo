#include <iostream>

using namespace std;

    int demsolan ( float a[], int m, float b[], int n){
        int i=1, j=0, x=0, dem(0);
        for( i=1; i<=n; i++){
            int khac=0;
            if(b[i]==a[1]&& n-i>=m-1){
                for( j=i , x=1; x<=m; j++ && x++){
                    if(a[x]!=b[j]) {
                        khac++;
                        break;
                    }
                }
                if(khac==0) dem++;
            }
        }
        return dem;
    }

int main()
{
    int m, n;
    float a[10001], b[10001];
    cin>>m;
    for( int i =1; i<=m; i++){
        cin>>a[i];
    }
    cin>>n;
     for( int i =1; i<=n; i++){
        cin>>b[i];
    }
     cout<<demsolan(a,m,b,n);
    return 0;
}
