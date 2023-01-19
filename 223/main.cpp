#include <iostream>

using namespace std;

    bool mangtang( float a[], int n){           //kiem tra mang nhap vao co theo thu tu tang dan khong
        for( int i=1; i<n; i++){
            if(a[i]>a[i+1]) return false;
        }
        return true;
    }

    void thembaotoan ( float a[], int n, float x){
        if( x<a[1]) {           //neu x be hon gia tri dau mang
            while (n>=1){
                a[n+1]=a[n];        //cho tat ca gia tri cua mang lui lai 1 vi tri
                n--;
            }
            a[1]=x;         //dau mang la gia tri x
            }
        else{
            for( int i=n; i>=1; i--){       //duyet nguoc mang
                if(a[i]>x) a[i+1]=a[i];         //neu gia tri lon hon x thi cho no lui lai 1 vi tri
                    else {
                        a[i+1]=x;           //nguoc lai thi cho so dung ngay sau no bang x
                        break;
                    }
                }
            }
        }

int main()
{
    int n;
    cin>>n;
    float a[10001], x;
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    if( mangtang(a, n)==true){
        cout<<"Nhap gia tri x can them:";
        cin>>x;

        thembaotoan(a, n, x);
        for( int i=1; i<=n+1; i++){         //in ra mang da duoc them gia tri x ma van bao toan tinh don dieu tang cua mang
            cout<<a[i]<<" ";
        }
    }
        else cout<<"Nhap sai, xin hay nhap mang theo thu tu tang dan";
    return 0;
}
