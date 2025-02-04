#include <iostream>
using namespace std;

int main() {
    int n; cin >>n;
    int n_bandau = n, n_daonguoc = 0;
    while (n > 0) {
        int cuoi = n % 10;
        n_daonguoc = n_daonguoc * 10 + cuoi;
        n /= 10;
    }

    cout << n_daonguoc<< endl;
    if (n_bandau == n_daonguoc) {
        cout << n_bandau << " la so doi xung.\n";
    } else {
        cout << n_bandau << " khong phai so doi xung.\n";
    }

    return 0;
}
