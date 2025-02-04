#include<iostream>
using namespace std;

const int maxc = 1e6+1;
int C[maxc];

int main() {
    int n,x;
    cin >> n;
    int a[n];
    int mina = INT_MAX; int maxa= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        C[x]++;
        maxa = max(maxa, x);
        mina = min(mina, x);
    }
    for (int i = mina; i <= maxa; i++)
    {
        if(C[i] >= 1)
            cout << i << " " << C[i] << endl;

    }

    return 0;
}
