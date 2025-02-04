#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

const int maxn = 1e6 + 1;
vector<int> prime_count(maxn, 0);

void sieve() {
    vector<bool> is_prime(maxn, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= sqrt(maxn); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < maxn; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 1; i < maxn; i++) {
        prime_count[i] = prime_count[i - 1] + (is_prime[i] ? 1 : 0);
    }
}

int main() {
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);

    int t;
    cin >> t;

    sieve();

    while (t--) {
        int n;
        cin >> n;
        cout << prime_count[n] << endl;
    }

    return 0;
}
