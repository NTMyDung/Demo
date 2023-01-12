#include <iostream>

using namespace std;
    int vitri(float a[], int n){
        int x=-1;                   //coi bien x la vi tri can tim. Ban dau vi tri se khong co nen khoi tao voi -1
        for(int i=2; i<=n-1; i++){
            if(a[i-1]*a[i+1]==a[i]){        //dieu kien de lay ra vi tri
                x=i;                //tim dc thi gan vi tri i vao x
                break;      // ket thuc vong lap
            }
        }
        return x;       //tra ve vi tri dc gan vao x
    }

int main()
{
    int n;
    float a[10001];
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cout<<vitri(a,n);
    return 0;
}
