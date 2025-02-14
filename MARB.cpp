#include <iostream>
using namespace std;

int main() {
    freopen("MARB.INP", "r", stdin);
    freopen("MARB.OUT", "w", stdout);
    int n, m, k;
    cin >> n >> m >> k;
    int kq = (n + k) / m;
    cout << kq << endl;
    return 0;
}
