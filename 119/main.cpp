#include <iostream>
#include <math.h>
using namespace std;
    bool sochinhphuong (int x){
        int m=sqrt(x);          //luu phan nguyen ket qua khi lay can x vao m
        if(m*m==x) return true;         // khi do neu x la so chinh phuong thi m*m bang dung x
        return false;
    }

int main()
{

    int n;
    cin>>n;
    int a[10001];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++){
        if(sochinhphuong(a[i])==true) {         //neu gap so chinh phuong trong mang thi xuat ra
            cout<<a[i];
            break;          //va ket thuc vong lap
        }
    }
    return 0;
}
