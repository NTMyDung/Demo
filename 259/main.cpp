#include <iostream>

using namespace std;

    bool KiemTraToanDuong(float b[], int nb){           //ham kiem tra xem mang co tang dan hay khong
        for(int i =0; i < nb ; i++){
            if(b[i] <=0) return false;
        }
        return true;
    }

    float tongmang(float b[], int nb){      //ham tinh tong cac phan tu trong mang
        float tong(0);
        for( int i=0; i<nb; i++){
            tong+=b[i];
        }
        return tong;
    }

     void TongConDuongmax(float a[], int n){       //ham tim tong lon nhat cua mang con toan duong va in ra mang do
        int ChieuDai,maxx=-1, start, endd;
        float b[10001];
        int nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = i+1; ChieuDai <=n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(KiemTraToanDuong(b, nb) == true){
                    if(tongmang(b,nb)>maxx) {
                        maxx=tongmang(b,nb);
                        start=i;
                        endd=ChieuDai;
                    }
                }
            }
        }
        cout<<"Tong day con duong lon nhat la: "<<maxx<<endl;
        for( int i=start; i<endd; i++){
            cout<<a[i]<<" ";
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
    TongConDuongmax(a,n);
    return 0;
}
