#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[n];
    for( int i=1; i<=n; i++)
        cin>>a[i];
    int nhonhat=1;
    for( int i=2; i<=n; i++){
        if( a[i]< a[i-2]) nhonhat=i;
    }
    cout<<nhonhat;
    return 0;
}
