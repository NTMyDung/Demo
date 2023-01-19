#include <iostream>

using namespace std;

int main()
{
    int n,k;
    float x;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<"Nhap vi tri k can chen: ";
    cin>>k;
    cout<<"Nhap gia tri X can chen: ";
    cin>>x;

    float b[10002];
    for( int i=1; i<k; i++)
        b[i]=a[i];              //copy cac phan tu truoc vi tri k cua mang a vao mang b
    b[k]=x;                 //den vi tri k la ptu can chen
    for( int i=k+1; i<=n+1; i++){
        b[i]=a[i-1];            //copy cac ptu con lai vao vi tri sau k
    }

    for( int i=1; i<=n+1; i++){
        cout<<b[i];         //xuat mang
    }
    return 0;
}
