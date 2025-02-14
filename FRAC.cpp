#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void gcd_f(int a, int b, int c, int d, int &g, int &h) {
    int num_gcd = gcd(a, c);
    int den_lcm = (b / gcd(b, d)) * d;
    g = num_gcd;
    h = den_lcm / gcd(num_gcd, den_lcm);
}

int main() {
    freopen("FRAC.INP", "r", stdin);
    freopen("FRAC.OUT", "w", stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int g, h;
    gcd_f(a, b, c, d, g, h);
    cout << g << endl;
    cout << h << endl;
    return 0;
}
