#include <iostream>
using namespace std;

bool tang(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1])
            return false;
    }
    return true;
}

int main() {
    int a[6] = {1, 1, 2, 3, 4, 6};
    if (tang(a, 6)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
