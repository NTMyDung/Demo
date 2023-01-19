#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[10001];
        for( int i=1; i<=n; i++){
            cin>>a[i];                  //nhap ptu o vi tri i cua mang
            for( int j=1; j<=i; j++){
                if(a[i]<a[1]) {         //so sanh phan tu vua nhap voi ptu dau tien cua mang, neu be hon thi doi cho
                    swap (a[i], a[1]);
                }
                if(a[i]>=a[j-1]&&a[i]<=a[j]){        //sau do di tim vi tri j ma ptu tai do lon hon hoac bang ptu i (vua doi hoac vua duoc nhap )va ptu tai j-1 be hon hoac bang o vi tri i
                    swap (a[i],a[j]);           //doi cho 2 ptu o vi tri i va j
                }
            }
        }
    for( int i=1; i<=n; i++)
        cout<<a[i]<<" ";            //in ra mang ta dc mang tang dan
    return 0;
}
