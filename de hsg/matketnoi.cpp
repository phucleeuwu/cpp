#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    freopen("matketnot.inp", "r", stdin);
    freopen("matketnot.out", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> houses(n), towers(m);

        for (int i = 0; i < n; i++) {
            cin >> houses[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> towers[i];
        }

        sort(houses.begin(), houses.end());
        sort(towers.begin(), towers.end());

        int left = 0, right = 1e9, answer = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int j = 0;

            for (int i = 0; i < n; i++) {
                while (j < m && abs(houses[i] - towers[j]) > mid) {
                    j++;
                }
                if (j == m) {
                    break;
                }
            }

            if (j < m) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
