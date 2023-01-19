#include <iostream>

using namespace std;

    float lonnhat ( float a[], int n){          //ham tim gia tri lon nhat cua mang
        float ketqua=a[1];
        for( int i=2; i<=n; i++){
            if( a[i]>ketqua) ketqua=a[i];
        }
        return ketqua;
    }


int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    float x=lonnhat(a,n);           // gan gia tri lon nhat cua mang vao x
    int dem(0);                 //bien dem dem so gia tri lon nhat cua mang
    for( int i=n; i>=1; i--){
        if(a[i]==x) {           //duyet nguoc mang neu gap gia tri lon nhat cua mang thi cho tat ca gia tri phia sau lui ve truoc mot vi tri
            dem++;
            for( int j=i; j<=n-dem; j++){
                a[j]=a[j+1];
            }
        }
    }
     for( int i=1; i<=n-dem; i++){          //in ra mang khi da bo tat ca gia tri lon nhat, kich thuoc mang luc nay la n-dem
        cout<<a[i]<<" ";
    }
    return 0;
}
