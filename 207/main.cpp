#include <iostream>

using namespace std;

    bool atrongb ( float a[], int m, float b[], int n){         //ham kiem tra tat ca phan tu trong mang a co nam trong mang b khong
        int dem;
        for( int i=1; i<=m; i++){           //duyet tung phan tu mang a
            dem=0;
            for( int j=1; j<=n; j++){
                if(a[i]==b[j]) {
                    dem=1;
                    break;
                }                       //neu co gia tri o mang b bang ptu dang duyet o mang a thi bien dem=1
            }
            if(dem==0){
                return false;       //neu duyet het mang b ma dem=0=> khong co ptu nao o mang b bang tu dang xet o mang a thi ham tra ve false
                }
        }
        return true;
    }

int main()
{
    int m, n;
    cin>>m;
    float a[10001];
    for( int i=1; i<=m; i++)
        cin>>a[i];

    cin>>n;
    float b[10001];
    for( int i=1; i<=n; i++)
        cin>>b[i];

    if( atrongb(a,m,b,n)==true) cout<<"Tat ca phan tu cua mang a nam trong mang b";         //goi ham
        else cout<<"Co phan tu thuoc mang a khong nam trong mang b";
    return 0;
}
