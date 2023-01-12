#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[n], lonnhat;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    lonnhat=a[1];
    for(int i=2; i<=n; i++){
        if(a[i]>a[i-1]) lonnhat=a[i];
    }
    cout<<lonnhat;


    return 0;
}
