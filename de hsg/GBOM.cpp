#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<string> grid;

bool can_destroy_all(int X) {
    int bombs_used = 0;
    for (int i = 0; i < n; ++i) {
        int last_bomb = -1;

        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'x') {
                if (last_bomb == -1 || j > last_bomb + X) {
                    bombs_used++;
                    last_bomb = j + X;

                    if (bombs_used > k) {
                        return false;
                    }
                }
            }

            if (grid[i][j] == '#') {
                last_bomb = -1;
            }
        }
    }

    return true;
}

int main() {
    freopen("GBOMB.INP", "r", stdin);
    freopen("GBOMB.OUT", "w", stdout);

    cin >> n >> m >> k;
    grid.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int left = 0, right = m, result = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (can_destroy_all(mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << endl;

    return 0;
}
