#include <iostream>
using namespace std;

int main() {
  int x,n;
  cin >> n>>x;
  int T=x, M=1;
  float s=x;

  for (int i = 2; i <= n; i++) {

    T *= x;
    M += i;
    s += T * 1.0/ M;
    cout << i << "_"<< T << " " << M <<"\n";
  }
  cout << s;
}
