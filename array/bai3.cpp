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

    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8,9};
    int n = 10, k = 9;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nt(a[i] + a[j])) {
                cout << a[i] << " "<< a[j] << endl;

                ++dem;
            }
        }
    }
    cout << dem << endl;
}
