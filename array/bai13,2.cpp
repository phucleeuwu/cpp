#include <iostream>
using namespace std;

int main() {
    int a[13] = {1, 2, 3, 2, 5, 1, 7, 8, 9, 2, 3, 4, 5};
    int n = 13;
    int start = 0, len = 1, max_len = 1;
    int tong = a[0], max_tong = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            ++len;
            tong += a[i];
        } else {
            if (len > max_len) {
                max_len = len;
                max_tong = tong;
                start = i - max_len;
            } else if (tong > max_tong) {
                max_tong = tong;
                start = i - max_len;
            }
            len = 1;
            tong = a[i];
        }
    }

    if (len > max_len) {
        max_len = len;
        max_tong = tong;
        start = n - max_len;
    } else if (tong > max_tong) {
        max_tong = tong;
        start = n - max_len;
    }

    cout << max_len << endl;
    for (int i = 0; i < max_len; i++) {
        cout << a[start + i] << " ";
    }
}
