#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return n;
    }
    return n + sum(n - 1);
}

int giaithua(int n) {
    if (n == 0) {
        return 1;
    }
    return n * giaithua(n - 1);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int nCk(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return nCk(n - 1, k - 1) + nCk(n - 1, k);
}

int sumDigit(int n) {
    if (n < 10) {
        return n;
    }
    return sumDigit(n / 10) + n % 10;
}

int main() {
    int n, k;
    cin >> n;
    cin >> k;
    cout << nCk(n, k);
    return 0;
}
