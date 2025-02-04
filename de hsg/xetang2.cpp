#include <iostream>
using namespace std;

long long n, m, a[100005], s[100005];

void doc() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

bool kiemtra(int l) {
    for (int i = 1; i <= n - l + 1; i++) {
        if (s[i + l - 1] - s[i - 1] < m) return 0;
    }
    return 1;
}

void xuly() {
    s[0] = 0;
    for (int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + a[i];
    }

    int d = 1, c = n;
    while (d + 1 < c) {
        int mid = (d + c) / 2;
        if (kiemtra(mid)) c = mid;
        else d = mid;
    }

    int res = 0;
    if (kiemtra(d)) res = d;
    else res = c;
    cout << res << endl;
}

int main() {
    doc();
    xuly();
    return 0;
}
