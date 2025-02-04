#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 1005;
int arr[MAXN];
int st[20][MAXN];

void sparse_table(int n) {
    for (int i = 1; i <= n; i++) {
        st[0][i] = arr[i-1];
    }

    for (int p = 1; p <= log2(n); p++) {
        for (int i = 1; i + (1 << p) <= n+1; i++) {
            st[p][i] = min(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
        }
    }

    for (int p = 0; p <= log2(n); p++) {
        for (int i = 1; i + (1 << p) <= n+1; i++) {
            cout << st[p][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sparse_table(n);

    return 0;
}
