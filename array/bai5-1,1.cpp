#include <iostream>
#include <math.h>

using namespace std;

bool check(int a[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        if (a[left] != a[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    int a[] = {1, 2, 3, 3, 2, 1};
    if (check(a, 6)) cout << "YES\n";
    else cout << "NO\n";
}
