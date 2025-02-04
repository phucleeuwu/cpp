#include <iostream>
#include <set>
using namespace std;

typedef long long ll;
set<ll> tap_luy_thua_3;

void tao_tap_luy_thua() {
    for (ll i = 1; i <= 1e18; i *= 3) {
        for (ll j = i; j <= 1e18; j = j * 3 + 1) {
            tap_luy_thua_3.insert(j);
        }
    }
}

ll tim_so_nho_nhat(ll n) {
    auto it = tap_luy_thua_3.lower_bound(n);
    return (it != tap_luy_thua_3.end()) ? *it : -1;
}

int main() {
    freopen("tranbonho.inp", "r", stdin);
    freopen("tranbonho.out", "w", stdout);

    int T;
    cin >> T;

    tao_tap_luy_thua();

    while (T--) {
        ll n;
        cin >> n;
        cout << tim_so_nho_nhat(n) << "\n";
    }

    return 0;
}
