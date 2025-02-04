#include <iostream>
using namespace std;
long long a[20], x[20], n, s;

void init()
{
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void output()
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + a[i] * x[i];
        if (sum == s)
        {
            for (int i = 1; i <= n; i++)
            {
                if (x[i] == 1)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
}

void tim(int i)
{
    for (int j = 0; j <= n; j++)
    {
        x[i] = j;
        if (i == n) output();
        else tim(i + 1);
    }
}

int main()
{
    init();
    tim(1);
}
