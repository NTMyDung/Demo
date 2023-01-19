#include <iostream>

using namespace std;

    void doichochan ( int a[], int n, int vitrii){          //dua mot gia tri mot ve dau mang khi biet vi tri cua gia tri chan trong mang
        int x=a[vitrii];
        for( int i=vitrii; i>1; i--){
                a[i]=a[i-1];
            }
        a[1]=x;
    }

    void doichole ( int a[], int n, int vitrii){          //dua mot gia tri mot ve cuoi mang khi biet vi tri cua gia tri le trong mang
        int x=a[vitrii];
        for( int i=vitrii; i<n; i++){
                a[i]=a[i+1];
            }
        a[n]=x;
    };

    void chandaulecuoi ( int a[], int n){           //ham dua chan ve dau mang va le ve cuoi mang
        for( int i=1; i<=n; i++){
            if(a[i]%2==0&&a[i]!=0) doichochan(a,n,i);
            if(a[i]%2!=0) doichole (a,n,i);
        }
    }
int main()
{
     int n, dem(0);
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    chandaulecuoi(a,n);
    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
