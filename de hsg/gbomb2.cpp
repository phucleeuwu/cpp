#include <iostream>
using namespace std;

int const N = 1000;
char A[N][N];

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      cout << A[i][j];
      cout << endl;
    }
  }
}
