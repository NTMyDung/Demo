#include <iostream>

using namespace std;

    void LietKeTatCaMangCon(int a[],int n){         //ham liet ke tat ca mang con cua a
        int ChieuDai;  // độ dài mảng con
        for(int i = 1; i <= n; i++){
            for(ChieuDai = i; ChieuDai <= n; ChieuDai++){
                for(int j = i; j <= ChieuDai; j++){
                    cout<<a[j]<<" ";
                }
                cout<<endl;
            }
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
     LietKeTatCaMangCon(a,n);
    return 0;
}
