#include <iostream>
using namespace std;
int main()
{
    int n;

    freopen("b1.inp", "r", stdin);
    freopen("b1.out", "w", stdout);
    cin>> n;
    while (n>=10)
    {
        n /= 10;
    }
    cout <<n;
}
