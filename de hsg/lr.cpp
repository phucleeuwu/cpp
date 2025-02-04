#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

const int N = 1e5 + 5;

long long n, q, a[N], l, r, minn;

int main() {
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cin >> q;
    while (q--) {
        cin >> l >> r;
        minn = LLONG_MAX;
        for (int j = l; j <= r; j++) {
            minn = min(minn, a[j]);
        }
        cout << minn << '\n';
    }

    return 0;
}
