#include <iostream>
using namespace std;
int x[10], n, k;

void init()
{
    cin >> k >> n;
}

void output()
{
    for (int i = 1; i <=k; i++)
    {
        cout << x[i] << endl;
    }
}

void tim(int i)
{
    for (int j = x[i - 1] + 1; j <= n; j++)
    {
        x[i] = j;
        if (i == k) output();
        else tim(i + 1);
    }
}

int main()
{
    init();
    tim (1);
}
