#include<iostream>

using namespace std;

    void mangconlonhon2ptu(int a[],int n){          //ham in ra mang con co do dai lon hon 2 cua mang a
        int ChieuDai;  // độ dài mảng con
        for(int i = 1; i <= n; i++)
        {
            for(ChieuDai = 2 + i; ChieuDai <= n; ChieuDai++)
            {
                for(int j = i; j <= ChieuDai; j++)
                {
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
    mangconlonhon2ptu(a,n);
    return 0;
}
