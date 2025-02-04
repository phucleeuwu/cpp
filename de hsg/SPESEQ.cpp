#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve_small(const vector<int>& a, int n, int W) {
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int w = W; w >= a[i]; --w) {
            dp[w] = max(dp[w], dp[w - a[i]] + 1);
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int solve_large(const vector<int>& a, int n, int W) {
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int w = W; w >= a[i]; --w) {
            dp[w] = max(dp[w], dp[w - a[i]] + 1);
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    freopen("SPESEQ.INP", "r", stdin);
    freopen("SPESEQ.OUT", "w", stdout);

    int n, W;
    cin >> n >> W;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result;
    if (n <= 50) {
        result = solve_small(a, n, W);
    } else {
        result = solve_large(a, n, W);
    }

    cout << result << endl;

    return 0;
}
