#include <iostream>

using namespace std;

    void tongconlonnhat (float a[], int n){         //ham in ra tong con lon nhat
        float best= INT_MIN;
        float sum(0), start=0, endd=0, current_start=0;
        for( int i=0; i<n; i++){
            if(sum+a[i]<a[i]) {
                sum=a[i];
                current_start= i;
                endd=1+i;
            }
                else {
                    sum+=a[i];
                    endd++;
                }
           if (best < sum) {
            best = sum;
            start = current_start;
            endd = i;
            }
        }

        cout<<best;
        for( int i=start; i<= endd; i++){
            cout<<a[i]<<" ";
        }
    }
int main()
{
    int n;
    cin>>n;
    float a[10001];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    tongconlonnhat(a,n);
    return 0;
}

