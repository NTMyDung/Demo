#include <iostream>

using namespace std;

    bool KiemTraTangDan(float b[], int nb){           //ham kiem tra xem mang co tang dan hay khong
        for(int i =0; i < nb-1 ; i++){
            if(b[i] > b[i + 1]){
                return false;
            }
        }
        return true;
    }

    float tongmang(float b[], int nb){      //ham tinh tong mang
        float tong(0);
        for( int i=0; i<nb; i++){
            tong+=b[i];
        }
        return tong;
    }

    void LietKeTongConTang(float a[], int n){       //ham in ra tong cua cac mang con tang
        int ChieuDai;
        float b[10001];
        int nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = 1+i; ChieuDai <= n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(KiemTraTangDan(b, nb) == true){
                    cout<<tongmang(b,nb)<<endl;
                }
            }
        }
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    LietKeTongConTang(a,n);
    return 0;
}
