#include <iostream>

using namespace std;

    bool KiemTraToanDuong(int b[], int nb){           //ham kiem tra xem mang co tang dan hay khong
        for(int i =0; i < nb ; i++){
            if(b[i] <=0) return false;
        }
        return true;
    }

    void XuatMangCon(int b[], int nb){          //ham de xuat cac mang con
        for(int i =0; i < nb; i++){
            cout<<b[i]<<" ";
        }
    }

    void LietKeConDuong(int a[], int n){        //ham liet ke tat ca mang con duong
        int ChieuDai;
        int b[10001], nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = 2+i; ChieuDai <= n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(KiemTraToanDuong(b, nb) == true){
                    XuatMangCon(b, nb);
                    cout<<"\n";
                }
            }
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    LietKeConDuong(a,n);
    return 0;
}
