#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int cuoi, min_cuoi, n, dem=0;
    min_cuoi = 1e9;
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);

    cin >> n;
    int n_bandau = n;


    while (n != 0)
    {
        cuoi = n % 10;
        min_cuoi = min(min_cuoi, cuoi);
        n /= 10;
    }

    while (n_bandau != 0)
    {
        cuoi = n_bandau % 10;
        if (min_cuoi == cuoi) ++dem;
        n_bandau /=10;
    }


    cout << min_cuoi << " " << dem;
}

