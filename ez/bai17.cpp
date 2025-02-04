#include <iostream>
using namespace std;

int main() {
  int x,n;
  cin >> n>>x;
  int T=x, M=1;
  float s=2020 +x;

  for (int i = 1; i <= n; i++) {

    T *= 2*x;
    M *= 2*i;
    s += T * 1.0/ M;
    cout << i << " "<< T << " " << M <<"\n";
  }
  cout << s;
}
