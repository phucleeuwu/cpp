#include <iostream>
#include <climits>
using namespace std;

const int maxc = 1e6 + 1;
int C[maxc];

int main() {
    int n;
    cin >> n;
    int a[n];
    int min_val = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        C[a[i]]++;
        min_val = min(min_val, C[a[i]]);

    }


    /*for (int i = 0; i < n; i++) {
        if (C[a[i]] > 0) {
            min_val = min(min_val, C[a[i]]);
        }
    }*/


    for (int i = 0; i < n; i++) {
        if (C[a[i]] == min_val) {
            cout << a[i] << " " << C[a[i]] << endl;
            C[a[i]] = 0;
        }
    }

    return 0;
}
