#include <iostream>
using namespace std;
int main()
{
    int T,s, du ;
    T=0;
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    cin >> s;
    while (s!=0)
    {
        du = s% 10;
        T= T *10 +du;
        s/= 10;

    }
    cout << T;
}


