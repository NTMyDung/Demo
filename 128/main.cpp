#include <iostream>

using namespace std;
    int ucln(int x, int y){     //tim uoc chung lon nhat 2 so theo thuat toan euclid
        if(y==0) return x;
        return ucln(y, x%y);
    }
    int bcnn(int x, int y){         //ham tim boi chung nho nhat 2 so
        return (x*y)/ucln(x,y);
    }

int main()
{
    int n, dem(0);
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    int bcnnhat=a[1];
    for(int i=2; i<=n; i++){
        bcnnhat=(a[i], bcnn(bcnnhat, a[i]));        //tim boi chung nho nhat cua ca mang
    }
    cout<<bcnnhat;
    return 0;
}
