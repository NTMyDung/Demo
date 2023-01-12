#include <iostream>

using namespace std;

    int tongchuc ( int a[], int n){     //ham kiem tra so hang chuc co la so 5 khong
        int result=0;
        for( int i=1; i<=n; i++){
            int x=a[i]/10;
            x=x%10;                         //x luu chu so hang chuc cua a[i]
            if(x==5||x==-5) result +=a[i];
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

    cout<<tongchuc (a,n);       //goi ham
    return 0;
}

