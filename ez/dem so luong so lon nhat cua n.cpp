#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cuoi, max_cuoi, n, dem =0;
    max_cuoi = -1e9;
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    cin >> n;
    int n_bandau = n;
    while (n != 0)
    {
        cuoi = n % 10;
        max_cuoi = max(max_cuoi, cuoi);
        n /= 10;
    }
   while (n_bandau != 0)
    {
        cuoi = n_bandau % 10;
        if (max_cuoi == cuoi) ++dem;
        n_bandau /=10;
    }


    cout << max_cuoi << " co " << dem;
}
