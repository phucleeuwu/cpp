#include <iostream>
using namespace std;

bool check(int a[], int n, int K) {
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] == K) {
            return true;
        } else if (a[l] + a[r] < K) {
            ++l;
        } else {
            --r;
        }
    }
    return false;
}

int main() {
    int a[13] = {1, 2, 2, 2, 3, 3, 5, 7, 8, 9, 13, 23, 25};
    int n = 13, K = 16;
    cout << check(a, n, K) << endl;
}
