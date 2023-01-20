#include <iostream>

using namespace std;

    bool KiemTraGiamDan(int b[], int nb){           //ham kiem tra xem mang co giam dan hay khong
        for(int i =0; i < nb-1 ; i++){
            if(b[i] < b[i + 1]){
                return false;
            }
        }
        return true;
    }


    int MangConGiam(int a[], int n){        //ham dem so mang con tang dan cua mang a
        int ChieuDai, dem(0);
        int b[10001], nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = 1+i; ChieuDai <= n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(KiemTraGiamDan(b, nb) == true){
                    dem++;
                }
            }
        }
        return dem;
    }

int main()
{
    int n;
    cin>>n;
    int a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<MangConGiam(a,n);
    return 0;
}

