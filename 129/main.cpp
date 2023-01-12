#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[1001];
    int b[10]={};
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        a[i]=abs(a[i]);
        while(a[i]!=0){
            b[a[i]%10]++;
            a[i]=a[i]/10;           //di dem so luong chu so cua mang a luu vao mang b
        }
    }

    int minn=1000;          //cho minn la mot so lon

    for(int i=0; i<10; i++){
        if(b[i]>0){
            if(b[i]<minn){
                minn=b[i];          //di tim so lan chu so xuat hien it nhat
            }
        }
    }

     for(int i=0; i<10; i++){
         if(b[i]==minn) cout<<i<<" ";       //duyet mang tim gia tri co so lan xuat hien it nhat( co the la 1 hay nhieu so)
     }

    return 0;
}
