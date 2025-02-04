#include <iostream>
#include <math.h>

using namespace std;

bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

int main() {
    int a[] = {3, 1, 2, 5, 9, 11, 18, 19, 17, 55, 40, 23};
    int n = 12;
    for (int i = 0; i < n; i++) {
        if (nt(a[i])) {
            cout << a[i] << " ";
        }
    }
}
