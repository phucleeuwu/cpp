#include <cstring>
#include <iostream>
using namespace std;
int a[1002], sl[1002], L[100002], T[100002];
int n, m, res;
void doc()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void xuly()
{
    memset(L, 101, sizeof(L));
    memset(T, 0, sizeof(T));
    L[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] <= j)
            {
                if (L[j - a[i]] + 1 < L[j])
                {
                    L[j] = L[j - a[i]] + 1;
                    T[j] = i;
                }
            }
        }
    }
}
void inkq() {
    int j;
    cout << L[m] << endl;
    do {
        j = T[m];
        sl[j]++;
        m -= a[j];
    } while (L[m] != 0);
    for (int i = 1; i <= n; i++)
    {
        cout << sl[i] << " ";
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
