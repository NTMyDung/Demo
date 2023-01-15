#include <iostream>

using namespace std;

    int demgiatri ( float x[], int h, float y[], int v){        //ham dem so gia tri chi co trong mang x ma khong co trong mang y
        int dem=0;
        for( int i=1; i<=h; i++){
            int demtrung=0;
            int m=1;
            for( int j=i+1; j<=h; j++){
                if(x[i]==x[j]){             //duyet mang x neu gap ptu co ptu phia sau trung no thi bo qua
                    m=0;
                    break;
                }
            }
            if(m==1){                               //neu ptu khong con ptu nao phia sau giong no thi duyet mang y xem thu co trung phan tu nao khong
                for( int k=1; k<=v; k++){
                    if(y[k]==x[i]){
                        demtrung++;
                        break;
                    }
                }
            if(demtrung==0) dem++;      //khong trung thi dem tang len 1
            }
        }
        return dem;
    }


int main()
{
    int m, n;
    float a[10001], b[10001];
    cin>>m;
    for( int i =1; i<=m; i++){
        cin>>a[i];
    }
    cin>>n;
     for( int i =1; i<=n; i++){
        cin>>b[i];
    }
    cout<<demgiatri(a,m,b,n)+demgiatri(b,n,a,m);        //ham in ra so gia tri chi co trong mang nay ma khong co trong mang kia
    return 0;
}
