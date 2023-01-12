#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10001]={};
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        if(i==1 && a[i]>a[i+1]) cout<<a[i]<<" ";        //so dau tien cua mang chi xet voi so ke sau
        if(i==n && a[i]>a[i-1]) cout<<a[i]<<" ";        //so cuoi cung chi xet voi so ke truoc
        if(i!=1 && i!=n && a[i]>a[i+1]&&a[i]>a[i-1]) cout<<a[i]<<" ";       //cac so con lai phai xet voi ca 2 so ke 2 ben
    }
    return 0;
}
