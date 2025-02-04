#include <iostream>
using namespace std;
int x[11], n, k, a[11];

void init() {
    cin >> k >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    x[0] = 0;
}

void output()
{
    for(int i = 1; i <= k; i++)
    {
        cout << a[x[i]] << " ";
    }
    cout << endl;
}

void tim(int i)
{
    for(int j = x[i - 1] + 1; j <= n; j++)
    {
        x[i] = j;
        if(i == k)
        {
            output();
        }
        else tim(i + 1);
    }
}

int main()
{
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    init();
    tim(1);
}
