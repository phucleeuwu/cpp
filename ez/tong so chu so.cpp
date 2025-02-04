#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,s ;
    freopen("b1.inp", "r", stdin);
    freopen("b1.out", "w", stdout);
    cin >> s;
    while (s!=0)
    {
        T+= s%10;
        s /= 10;
    }
    cout << T;
}
