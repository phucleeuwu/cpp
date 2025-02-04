#include<iostream>
using namespace std;

const int maxc = 1e6+1;
int C[maxc];

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        C[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (C[a[i]] != 0) {
            cout << a[i] << " " << C[a[i]] << endl;
            C[a[i]]=0;
        }
    }

    return 0;
}
