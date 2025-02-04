#include<iostream>
using namespace std;

const int maxc = 1e6+1;
int C[maxc];

int main() {
    int n;
    cin >> n;
    int a[n];
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        C[a[i]]++;
        max_val = max(max_val, C[a[i]]);
    }
    for (int i = 0; i < n; i++)
    {
        if (C[a[i]] == max_val) {
            cout << a[i] << " " << C[a[i]] << endl;
            C[a[i]]=0;
        }
    }

    return 0;
}
