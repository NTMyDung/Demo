#include <iostream>

using namespace std;

    bool KiemTraToanDuong(int b[], int nb){           //ham kiem tra xem mang co tang dan hay khong
        for(int i =0; i < nb ; i++){
            if(b[i] <=0) return false;
        }
        return true;
    }

    int tongmang(int b[], int nb){      //ham tinh tong cac phan tu trong mang
        int tong(0);
        for( int i=0; i<nb; i++){
            tong+=b[i];
        }
        return tong;
    }

     int TongConDuongmax(int a[], int n){       //ham tim tong lon nhat cua mang con toan duong
        int ChieuDai,maxx=-1;
        int b[10001], nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = 1+i; ChieuDai <= n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(KiemTraToanDuong(b, nb) == true){
                    if(tongmang(b,nb)>maxx) maxx=tongmang(b,nb);
                }
            }
        }
       return maxx;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<TongConDuongmax(a,n);
    return 0;
}
