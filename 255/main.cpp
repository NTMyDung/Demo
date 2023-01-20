#include <iostream>

using namespace std;

    bool KiemTraCon(int a[], int b[], int na, int nb)
{
    int i, j, Check = 0;
    for(i = 0; i < nb; i++){           // Duyệt mảng b
        if(b[i] == a[0])        // Nếu mà thấy bất kỳ phần tử nào của mảng b bằng phần tử đầu tiên của mảng a
        {
            int batdau = i;      // bắt đầu đếm tại vị trí đó
            Check = 1;
            for(j = 0; j < na; j++)
            {
                if(a[j] != b[batdau++])
                {
                    Check = 0;
                    break;
                }
            }
            if(Check == 1)
            {
                return true; // Mảng a là mảng con của b
            }
        }
    }
    return false;
}

int main()
{
    int na, nb;
    cin>>na>>nb;
    int a[10001], b[100001];
    for( int i=0; i<na; i++){
        cin>>a[i];
    }
    for( int i=0; i<nb; i++){
        cin>>b[i];
    }
    if(KiemTraCon(a,b,na,nb)==true) cout<<"Mang a la con cua mang b";
        else cout<<"Mang a khong la con mang b";
    return 0;
}
