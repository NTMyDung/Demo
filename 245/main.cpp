#include <iostream>

using namespace std;

    void TimMinMax(int a[], int n, int &maxx, int &minn){       //ham tim gia tri lon nhat va gia tri nho nhat cua mang
        maxx = a[0];
        minn = a[0];
        for(int i = 1; i <= n; i++){
            maxx = (a[i] > maxx) ? a[i] : maxx;
            minn = (a[i] < minn) ? a[i] : minn;
        }
    }

    void DoiMaxBangMinVaNguocLai(int a[], int n, int maxx, int minn){           //ham doi gia tri lon nhat thanh gia tri nho nhat va nguoc lai
        for(int i = 1; i <= n; i++){
            if(a[i] == maxx){
                a[i] = minn;
            }
            else if(a[i] == minn){
                a[i] = maxx;
            }
        }
    }


int main()
{
    int n, minn, maxx;
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];

    }

    TimMinMax(a, n, maxx, minn);

    DoiMaxBangMinVaNguocLai(a, n, maxx, minn);

    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
