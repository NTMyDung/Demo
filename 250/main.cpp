#include <iostream>

using namespace std;


    int TimMax(int a[], int n){         //ham tim gia tri lon nhat trong mang
    int maxx= a[0];
    for(int i = 1; i < n; i++){
        maxx = a[i] > maxx ? a[i] : maxx;
    }
    return maxx;
    }

    bool KiemTraTangDan(int b[], int nb){           //ham kiem tra xem mang co tang dan hay khong
        int dem;
        for(int i =0; i < nb-1 ; i++)
            if(b[i] > b[i + 1]){
                return false;
            }
        return true;
    }

    bool KiemTraCoMax(int b[], int nb, int maxx){       //ham kiem tra xem co gia tri max cua mang a trong tung mang con khong
        for(int i = 0; i < nb; i++){
            if(b[i] == maxx){
                return true;
            }
        }
        return false;
    }

    void XuatMangCon(int b[], int nb){          //ham de xuat cac mang con
        for(int i =0; i < nb; i++){
            cout<<b[i]<<" ";
        }
    }

    void LietKe(int a[], int n, int maxx){      //ham de xuat mang con vua tang dan vua co chua max cua a
        int ChieuDai;
        int b[10001], nb;
        for(int i = 0; i < n; i++){
            for(ChieuDai = 1+i; ChieuDai <= n; ChieuDai++){
                nb = 0;
                for(int j = i; j <ChieuDai; j++){
                    b[nb] = a[j];
                    nb++;
                }
                if(KiemTraTangDan(b, nb) == true ){
                    if(KiemTraCoMax(b, nb, maxx)==true){
                        XuatMangCon(b, nb);
                        cout<<"\n";
                    }
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
    int maxx=TimMax(a,n);

    LietKe(a,n, maxx);
    return 0;
}
