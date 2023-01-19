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
                if(a[i]>a[1]) {         //so sanh phan tu vua nhp voi ptu dau tien cua mang, neu lon hon thi doi cho
                    swap (a[i], a[1]);
                }
                if(a[i]>=a[j]&&a[i]<=a[j-1]){        //sau do di tim vi tri j ma ptu tai do nho hon hoac bang ptu i vua doi hoac vua duoc nhap va ptu tai j-1 lon hon hoac bang ptu o vi tri i
                    swap (a[i],a[j]);           //doi cho 2 ptu o vi tri i va j
                }
            }
        }
    for( int i=1; i<=n; i++)
        cout<<a[i]<<" ";            //in ra mang ta dc mang giam dan
    return 0;
}
