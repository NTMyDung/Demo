#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n;
    float a[100001];
    for ( int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Nhap vi tri can xoa:";
    cin>>k;

    for( int i=k; i<=n-1; i++){         //de xoa vi tri k ta chi can cho cac gia tri sau k lui ve trc 1 vi tri la dc
        a[i]=a[i+1];
    }

    for ( int i=1; i<=n-1; i++){        //in ra mang a luc nay bi mat mot vi tri
        cout<<a[i]<<" ";
    }
    return 0;
}
