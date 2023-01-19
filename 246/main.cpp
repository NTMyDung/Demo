#include <iostream>

using namespace std;

    void SoGanNhat(float &n)        //lam tron
    {
        int phannguyen = (int)(n);
        float phanle = n - phannguyen;

        if(phanle <= 0.5)      {
            n = (float)phannguyen;
        }
        else{
            n = (float)phannguyen + 1;
        }
    }

    void Thaygannonhat(float a[], int n){       //thay no bang so da lam tron
        for(int i = 1; i <= n; i++){
            SoGanNhat(a[i]);
        }
    }

int main()
{
    int n;
    cin>>n;
    float a[100001];
    for( int i=1; i<=n; i++){
        cin>>a[i];

    }

    Thaygannonhat(a,n);

    for( int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
