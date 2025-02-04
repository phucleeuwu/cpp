#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

long long gt(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int N;
    double X, s = 2020;
    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        int M = 2 * i + 1;
        s += pow(X, M) / gt(M);
    }
    cout << fixed<<setprecision(1) << s + X;

    return 0;
}
