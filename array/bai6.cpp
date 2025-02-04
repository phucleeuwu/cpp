#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a[] = {1, 5, 1, 1, 2, 3, 1, 4, 5, 0};
    int n = 10;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << a[i] << " ";
        }
    }
}
