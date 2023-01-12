#include <iostream>

using namespace std;
    float dautientrongdoan( float a[] ,float x, float y, int n){
        for(int i=1; i<=n; i++){
            if(a[i]>x&&a[i]<y) {        //tim gia tri dau tien trong mang thuoc khoang(x,y)
                x=a[i];         //tim dc thi gan vao gtri x;
                break;      // ket thuc vong lap
            }
        }
        return x;       //tra ve gtri cua x. neu khong ton tai gia tri thoa dieu kien trong mang se tra ve gtri x ban dau
    }

int main()
{
    int n;
    float arr[10001];
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    float x,y;
    cin>>x>>y;
    cout<<dautientrongdoan(arr, x, y, n);

    return 0;
}
