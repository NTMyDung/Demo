#include <iostream>

using namespace std;

    int tongmang(int b[], int nb){      //ham tinh tong mang
        int tong(0);
        for( int i=0; i<nb; i++){
            tong+=b[i];
        }
        return tong;
    }

     void XuatMangCon(int b[], int nb){          //ham de xuat cac mang con
        for(int i =0; i < nb; i++){
            cout<<b[i]<<" ";
        }
    }

    void tongmangbangM(int a[], int n, int M){      //ham xuat mot mang con co tong cac ohan tu trong mang bang M
        int ChieuDai, tontai=0;
        int b[10001];
        int nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = 1+i; ChieuDai <= n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(tongmang(b, nb) == M){
                    XuatMangCon(b, nb);
                    tontai=1;
                    break;
                }
            }
            if(tontai==1) break;
        }
    }

int main()
{
    int n, M;
    cin>>n>>M;
    int a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    tongmangbangM(a,n,M);
    return 0;
}
