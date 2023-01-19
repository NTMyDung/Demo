#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    int dem(0);                 //bien dem dem so gia tri am cua mang
    for( int i=n; i>=1; i--){
        if(a[i]<0) {           //duyet nguoc mang neu gap am thi cho tat ca gia tri phia sau lui ve truoc mot vi tri
            dem++;
            for( int j=i; j<=n-dem; j++){
                a[j]=a[j+1];
            }
        }
    }
     for( int i=1; i<=n-dem; i++){          //in ra mang khi da bo tat ca gia tri am, kich thuoc mang luc nay la n-dem
        cout<<a[i]<<" ";
    }
    return 0;
}
