#include <iostream>

using namespace std;

    int lonhontruoc ( float a[], int n){        //ham dem co bao nhieu so trong mang lon hon tat ca so dung trc no
        int dem(0);
        for( int i=2; i<=n; i++){
            int x=1;
            for( int j=i-1; j>=1; j--)      //xet cac so o vi tri truoc i neu co so lon hon so o vi tri i thi khong thoa dk
                if( a[i]<a[j]) {
                    x=0;
                    break;
                }
            if( x==1) dem++;        //neu tat ca deu thoa thi nhan gia tri do
        }
        return dem;
    }

int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=1; i<=n; i++)
        cin>>a[i];

    cout<<lonhontruoc( a, n);           //goi ham
    return 0;
}
