#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int cuoi, max_cuoi, n ;
    max_cuoi= -1e9;
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    cin >> n;
    while (n!=0)
    {
        cuoi = n%10;
        max_cuoi = max(max_cuoi, cuoi);
        n/=10;
    }
    cout << max_cuoi;
}


