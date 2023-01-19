#include <iostream>

using namespace std;

    bool giatritrung ( float a[], int n, float x){          //kiem tra mot so co la gia tri trung khong
        int dem=0;
        for( int i=1; i<=n; i++){
            if(a[i]==x){
                dem++;
            }
        }
        if(dem>=2) return true;
            else return false;
    }

     void xoatrungtatca( float a[], int n){
        int dem(0);
        for( int i=1; i<=n-dem; i++){
            if(giatritrung(a,n,a[i])==true){        //neu a[i] la gia tri trung ta gan x=a[i]=> xoa tat ca giatri trung x
                int x=a[i];
                for( int k=n-dem; k>=1; k--){
                    if(a[k]==x) {           //duyet nguoc mang neu gap so trung voi x thi cho tat ca gia tri phia sau lui ve truoc mot vi tri
                        dem++;
                        for( int j=k; j<=n-dem; j++){
                            a[j]=a[j+1];
                        }
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

    xoatrungtatca(a,n);
    return 0;
}
