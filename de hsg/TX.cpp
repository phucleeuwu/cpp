#include <cstdio>
#include <iostream>
using namespace std;

int a[12], L[1000002], T[100000002], b[12];
int n, m, res;

void doc()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    cin >> n;
}

void xuly()
{
    memset(L, 1000000, sizeof(L));
    memset(T, 0, sizeof(T));
    L[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j <= i)
            {
                if (L[i - j] + a[j] < L[i])
                {
                    L[i] = L[i - j] + a[j];
                    T[i] = j;
                }
            }
        }
    }
}

void inkq()
{
    int j, v;
    res = L[n]; v = n;
    cout << res << endl;
    do
    {
        cout << T[v] << " " << a[T[v]] << endl;
        v -= T[v];
    }
    while (v > 0);
}

int main()
{
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    doc();
    xuly();
    inkq();
    return 0;
}
