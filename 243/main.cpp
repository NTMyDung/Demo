#include <iostream>

using namespace std;

    void XuatChanLe2Hang(int a[], int n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(a[i] % 2 == 0)           //so chan thi in ra
            {
               cout<<a[i]<<" ";
            }
        }
        cout<<endl;         //sau khi in ra so chan het thi xuong dong

        for(int i = 1; i <= n; i++)
        {
            if(a[i] % 2 != 0)           //in so le o dong tiep theo
            {
               cout<<a[i]<<" ";
            }
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];

    }
     XuatChanLe2Hang(a,n);
    return 0;
}
