#include <iostream>

using namespace std;
    int UCLN (int a, int b){
        if(b==0) return a;
        return UCLN (b, a%b);           //tim uoc chung lon nhat cua 2 so theo thuat toan Euclid
    }


int main()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int ucln=a[1];
    for(int i=2; i<=n; i++){
        ucln=UCLN(a[i],ucln);           //tim dc uoc chung cua mang thong qua ham tim uoc chung lon nhat 2 so
    }

    cout<<ucln;
    return 0;
}
