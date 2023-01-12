#include <iostream>
#include<fstream>
using namespace std;

    bool songuyento ( int x){       //ham kiem tra mot so co la so nguyen to khong
        if(x<=1) return false;      //so be hon hoac bang 1 khong la so nguyen to
        if(x==2) return true;
        for(int i=2; i<x; i++){
            if(x%i==0) {        // neu x co nghiem that su( khac 1 va chinh no) thi x khong la so nguyen to va ham tra ve false
                return false;
            }
        }
        return true;
    }

    long tongsonguyento ( int m, int n, int a[101][101]){
        long tong=0;
        for(int i=1; i<=m; i++){
            for( int j=1; j<=n; j++){           //duyet lan luot tung phan tu cua mang
                if(songuyento(a[i][j])==true) tong+=a[i][j];        //neu gap so nguyen to thi cong vao tong
            }
        }
        return tong;
    }

    void Lietke (int m, int n, int a[101][101]){
         int x=-1;
         for(int i=1; i<=m; i++)
            for( int j=1; j<=n; j++){
                if(x!=i){                           // cau lenh de chi xuat ra dung 1 lan vi tri cua hang, khong bi lap neu hang co nhieu hon 2 so nguyen to
                    if(songuyento(a[i][j])==true){          //neu tim thay so nguyen to
                        x=i;            //gan bien x = vi tri hang
                        cout<<i<<" ";       //in ra man hinh vi tri cua hang chua so nguyen to
                    }
                }
            }
    }

    bool Kiemtragiamdan (int m, int n, int a[101][101]){
        for(int i=1; i<=m; i++){
            for( int j=1; j<n; j++){
                if(a[i][j]<a[i][j+1])           //kiem tra theo hang. Neu ptu dung sau > ptu dung truoc thi sai
                    return false;
            }
        }
        for(int i=1; i<m; i++){
            for( int j=1; j<=n; j++){
                if(a[i][j]<a[i+1][j])           //kiem tra theo cot. Neu ptu dung duoi> ptu dung tren thi sai
                    return false;
            }
        }
        return true;
    }

int main()
{
    ifstream input("input.txt", ios::in);           // doc du lieu vao tu file input.txt
    int m, n;
    input>>m>>n;
    int a[101][101];

    for(int i=1; i<=m; i++){
        for( int j=1; j<=n; j++){
            input>>a[i][j];
            cout<<a[i][j]<<" ";             //in ra man hinh ma tran theo hang cot
        }
        cout<<endl;
    }

    cout<<"Tong cac so nguyen to trong ma tran la: "<<tongsonguyento( m, n, a)<<endl;

    cout<<"Cac dong co chua so nguyen to trong ma tran la hang thu: ";

    Lietke(m,n,a);
    cout<<endl;

    if(Kiemtragiamdan(m,n,a)==true) cout<<"Cac phan tu trong ma tran giam dan theo hang va theo cot";
        else cout<<"Cac phan tu trong ma tran KHONG giam dan theo hang va theo cot";

    return 0;
}
