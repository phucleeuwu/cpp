#include <iostream>
using namespace std;
int a[10], n;
void init()
{
    cin >> n;
}

void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

void tim(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            output();
        }
        else tim(i + 1);
    }
}

int main()
{
    freopen ("so.inp", "r", stdin);
    freopen ("so.out", "w", stdout);
    init();
    tim(1);
}
