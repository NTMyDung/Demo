#include <iostream>
#include <algorithm>
using namespace std;
    void gannhaunhat(float a[], int n){
        float result=abs(a[1]-a[2]);        //gan bien result la khoang cach cua 2 phan tu dau trong mang
        float x=a[1], y=a[2];           //2 gia tri can tim tuong ung voi result la a[1] va a[2]
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){      //duyet 2 vong for de tinh khoang cach nho nhat
                if(abs(a[i]-a[j])<result) {
                    result=abs(a[i]-a[j]);
                    x=a[i];
                    y=a[j];
                }
            }
        }
        cout<<"Hai gia tri gan nhau nhat trong mang la: "<<x<<" va "<<y;
    }

int main()
{
     int n, dem(0);
    cin>>n;
    float a[1001],b[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        b[i]=a[i];
    }
     sort(b+1, b+n+1);

     for(int i=1; i<=n; i++){
        if(b[i]==b[i+1]) {
            cout<<"xin moi nhap lai";
            dem++;                      //neu ton tai 2 so trung nhau thi khong thoa man de bài->yeu cau nhap lai
        }
    }
    if(dem==0) gannhaunhat(a,n);        //neu nhap dung thi goi ham

    return 0;
}
