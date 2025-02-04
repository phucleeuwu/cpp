#include <iostream>
using namespace std;
int x[11], d[11], a[11], n, k;

void init ()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[x[i]] << " ";
    }
    cout << endl;
}

void tim(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (d[j] == 0)
        {
            x[i] = j;
            d[j] = 1;
            if (i == n) output();
            else tim(i + 1);
            d[j] = 0;
        }
    }
}

int main()
{
    init();
    tim (1);
}
