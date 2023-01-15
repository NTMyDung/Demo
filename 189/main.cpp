#include <iostream>

using namespace std;

    void lietkegiatri ( float x[], int h, float y[], int v){        //ham dem so gia tri chi co trong mang x ma khong co trong mang y
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
            if(demtrung==0) cout<<x[i]<<" ";        //khong co phan tu trung thi in ra
            }
        }
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
    cout<<"Phan tu co trong mang a ma khong co trong mang b la: ";
    lietkegiatri(a,m,b,n);
    cout<<endl<<"Phan tu co trong mang b ma khong co trong mang a la: ";
    lietkegiatri(b,n,a,m);
    return 0;
}
