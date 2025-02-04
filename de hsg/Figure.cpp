#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long mod_inverse(long long n, long long mod) {
    return mod_exp(n, mod - 2, mod);
}

int main() {
    freopen("FIGURE.INP", "r", stdin);
    freopen("FIGURE.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    if (n < m) swap(n, m);

    if (n - m > 1) {
        cout << 0 << endl;
        return 0;
    }

    long long result = (factorial(n) * factorial(m)) % MOD;
    if (n == m) {
        result = (result * 2) % MOD;
    }

    cout << result << endl;

    return 0;
}
