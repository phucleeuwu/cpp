#include <iostream>
using namespace std;

int main() {
    int a[13] = {1, 2, 3, 2, 2, 7, 9, 9, 9, 3, 4, 5};
    int n = 13;
    int start = 0, len = 1, max_len = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            ++len;
        } else {
            if (len > max_len) {
                max_len = len;
                start = i - max_len;
            }
            len = 1;
        }
    }

    if (len > max_len) {
        max_len = len;
        start = n - max_len;
    }

    cout << max_len << endl;
    for (int i = 0; i < max_len; i++) {
        cout << a[start + i] << " ";
    }
}
