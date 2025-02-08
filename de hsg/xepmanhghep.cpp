#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;

long long gt (int n) {
    long long s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = ((s * i) % MOD) % MOD;
    }
    return s;
}
int main() {
    freopen("FIGURE.INP", "r", stdin);
    freopen("FIGURE.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    if (abs(n - m) >= 2) {
        cout << 0;
    }
    else if (n == m) {
        cout << 2 * ((gt(n) % MOD) * (gt(m) % MOD)) % MOD;
    }
    else {
        cout << ((gt(n) % MOD) * (gt(m) % MOD)) % MOD;
    }
}
