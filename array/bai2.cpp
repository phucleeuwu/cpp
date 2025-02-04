#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a[] = {3, 1, 2, 5, 9, 11, 18, 19, 17, 55, 40, 23};
    int n = 12;
    int min_val = INT_MAX, max_val = INT_MIN;
    cout << min_val << " " << max_val << endl;
    for (int i = 0; i < n; i++) {
       min_val = min (min_val, a[i]);
       max_val = max (max_val, a[i]);
    }
    cout << min_val << " " << max_val << endl;
}
