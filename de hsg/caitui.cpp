#include <iostream>
#include <cstring>
using namespace std;

int a[102], sl[102], L[10002], T[10002], b[102];
int n, m, res, w;
void doc()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
}

void xuly()
{
    memset(L, 0, sizeof(L));
    memset(T, 0, sizeof(T));
    L[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=w ;j++)
        {
            if (a[i] <= j)
            {
                if ((L[j - a[i]] + b[i] > L[j]) || (L[j] == 0))
                {
                    L[j] = L[j - a[i]] + b[i];
                    T[j] = i;
                }
            }
        }
    }
}

void inkq()
{
    int j, v;
    res = L[1]; v = 1;
    for (int i = 1; i <= w; i++)
    {
        if (L[i] > res)
        {
            res = L[i];
            v = i;
        }
    }
    cout << res << endl;
    if (res != 0)
    {
        do
        {
            j = T[v];
            sl[j]++;
            v -= a[j];
        } while (L[v] != 0);
        for (int i = 1; i <= n; i++)
        {
            cout << sl[i] << " ";
        }
    }
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
