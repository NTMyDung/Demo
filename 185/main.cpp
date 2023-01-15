#include <iostream>

using namespace std;

     void lietkephanbiet( float a[], int n){         //ham in ra cac gia tri xuat hien dung 1 lan trong mang
        for( int i=1; i<=n; i++){
            int dem=0;
            int m=1;
            for( int j=i+1; j<=n; j++){         //kiem tra neu co 2 so trung nhau thi bo qua
                if(a[i]==a[j]){
                    m=0;
                    break;
                }
            }
            if(m==1){
                for(int k=1; k<=n; k++){        //neu den so khong trung hoac so cuoi cung cua nhung so trung nhau thi dem so lan xuat hien
                    if(a[k]==a[i]) dem++;
                }
            }
            if(dem==1) cout<<"so gia tri xuat hien dung 1 lan trong mang la: "<<a[i]<<endl;
        }
    }


int main()
{
     int n;
    float a[10001];
    cin>>n;
    for( int i =1; i<=n; i++){
        cin>>a[i];
    }
    lietkephanbiet(a,n);         //goi ham

    return 0;
}
