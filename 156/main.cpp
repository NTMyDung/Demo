#include <iostream>

using namespace std;

    int tongdaule ( int a[], int n){
        int result =0;
        for( int i=1; i<=n; i++){
            int x=a[i];
            while (x>9||x<-9){
                x=x/10;
            }
            if(x%2!=0) result+=a[i];
        }
        return result;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<tongdaule(a,n);       //goi ham
    return 0;
}
