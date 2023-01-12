#include <iostream>

using namespace std;
    float gtrilonhon2003dautien (float a[],int  n){
        float result(0);
        for( int i=1; i<=n; i++)
            if(a[i]>2003){          //tim gia tri dau lon hon 2003
                result=a[i];
                break;          //tim duoc gia tri dau thi break
        }
        return result;

    }

int main()
{
    float n;
    float a[10001];
    cin>>n;
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<gtrilonhon2003dautien(a,n);

    return 0;
}
