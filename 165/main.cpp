#include <iostream>

using namespace std;

    bool songuyento ( int n){           //ham kiem tra xem 1 so co la so nguyen to khong
        if( n<=1) return false;
        if (n==2) return true;
        for ( int i=2; i<n; i++){
            if (n%i==0) return false;
        }
        return true;
    }

    float tbcnguyento (int a[], int n){         //ham tinh trung binh cong cac so nguyen to co trong mang
        float tong(0);
        float soluong=0;
        for(int i=1; i<=n; i++){
            if (songuyento(a[i])==true) {
                tong+=a[i];
                soluong++;
                }
            }
        return tong/soluong;
    }

int main()
{
    int n;
    int a[10001];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<< tbcnguyento(a,n);        // goi ham
    return 0;
}
