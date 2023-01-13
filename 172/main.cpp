#include <iostream>

using namespace std;

    int demdoixung ( int a[], int n){           //ham dem gia tri doi xung trong mang
        int dem(0);
        for(int i=1; i<=n; i++){
            int x=abs(a[i]);
            int songuoc=0;
            while(x>0){
                songuoc=songuoc*10+x%10;
                x=x/10;
            }
            if(songuoc==abs(a[i])) dem++;
        }
        return dem;
    }

int main()
{
    int n, a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    cout<<demdoixung(a,n);         //goi ham
    return 0;
}
