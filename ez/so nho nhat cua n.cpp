#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int cuoi, min_cuoi, n;
    min_cuoi= 1e9;
    freopen("so.inp", "r", stdin);
    freopen("so.out","w", stdout);
    cin>>n;
    while (n!=0)
    {
        cuoi= n% 10;
        min_cuoi= min(min_cuoi, cuoi);
        n/=10;
    }
    cout << min_cuoi;
}
