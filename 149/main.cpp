#include <iostream>

using namespace std;

    bool cotong( float a[], int n, float x, float y){           //ham kiem tra xem tong 2 so co la 1 so thuoc mang hay khong
        for(int i=1; i<=n; i++){
            if(x+y==a[i]) return true;
        }
        return false;
    }

int main()
{
    int n, dem(0);
    cin>>n;
    float a[10001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<n; i++){                 //kiem tra xem mang nhap vao da du dieu kien xet chua: cac so doi mot khac nhau
        for(int j=i+1; j<=n;j++){
        if(a[i]==a[j]) {
            cout<<"xin moi nhap lai, co gia tri bi trung nhau";
            dem++;
            }
        }
    }
    if(dem==0){
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n;j++){
            if(cotong(a,n,a[i],a[j])==true) {
                cout<<"("<<a[i]+a[j]<<","<<a[i]<<","<<a[j]<<") ";       //in ra cac bo ba so theo yeu cau
                }
            }
        }
    }
    return 0;
}
