#include <iostream>
#include <algorithm>
using namespace std;
    bool songuyento (int x){
        if(x==1) return false;
        if(x==2) return true;
        for(int i=2; i<x; i++)
            if(x%i==0) return false;
        return true;
    }

int main()
{
    int n, dem(0);
    cin>>n;
    int a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }

    sort (a+1, a+n+1);      //sap xep mang tang dan

    int x=a[n]+1;       //cho bien x chua so lon hon gtri lon nhat cua mang 1 don vi

    while ( songuyento(x)==false){          //neu nhu chua tim duoc so nguyen to thi cu tang x len 1 don vi den khi tim dc so ngto
        x++;
    }
    cout<<x;            //tim duoc thi in ra man hinh
    return 0;
}
