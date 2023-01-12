#include <iostream>

using namespace std;

int main()
{
    int n, dem(0);
    cin>>n;
    float a[n];
    for (int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>0) dem++;
    }
    if(dem==0) cout<<-1;
        else{
            float gtduongmax=a[1];
            for(int i=2; i<=n; i++)
                if(a[i]>a[i-1]) gtduongmax=a[i];
            cout<<gtduongmax;
        }

    return 0;
}
