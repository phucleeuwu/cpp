#include <iostream>
#include <climits>
using namespace std;

const int maxc = 1e6 + 1;
int C[maxc];

int main() {
    int n;
    cin >> n;
    int a[n];
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        C[a[i]]++;
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    for (int i = min_val; i <= max_val; i++)
    {
        if (C[i] == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
