#include <iostream>

using namespace std;

    void xoatrung( float a[], int n){           //ham xoa ptu trung, chi xuat hien 1 lan
        int dem(0);
        for( int i=1; i<=n-dem; i++){
            for( int j=n-dem; j>=i+1; j--){         //duyet nguoc de khong bi mat gia tri j
                if(a[j]==a[i]){                 //neu gap so tai vi tri j =a[i]
                    dem++;                      //dem so trung tang len 1
                    for( int k=j; k<=n-dem; k++){       //thi cho tat ca gia tri dang sau lui ve truoc mot vi tri
                        a[k]=a[k+1];
                        }
                    }
                }
            }
        for( int i=1; i<=n-dem; i++)
            cout<<a[i]<<" ";
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    xoatrung(a,n);
    return 0;
}
