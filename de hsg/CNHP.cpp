#include <cstdio>
#include <iostream>
#define N 1000002
using namespace std;
int a[N], prefix[N];

void solveSmall(int n) {
  int lmax = 0;
  int d = 0, c = 0;

  for (int i = 1; i <= n; i++) {
    int sum = 0;
    for (int j = i; j <= n; j++) {
      sum += a[j];
      if (sum > 0) {
        int l = j - i + 1;
        if (l >= lmax) {
          lmax = l;
          d = i;
          c = j;
        }
      }
    }
  }
  cout << d << " " << c;
}

void solveLarge(int n) {
  int lmax = 0;
  int d = 0, c = 0;

  prefix[0] = 0;
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + a[i];
  }

  int min_prefix_idx = 0;
  int min_prefix = 0;

  for (int i = 1; i <= n; i++) {
    if (prefix[i] > min_prefix) {
      int len = i - min_prefix_idx;
      if (len >= lmax) {
        lmax = len;
        d = min_prefix_idx + 1;
        c = i;
      }
    }
    if (prefix[i] < min_prefix) {
      min_prefix = prefix[i];
      min_prefix_idx = i;
    }
  }

  cout << d << " " << c;
}

int main() {
  freopen("so.inp", "r", stdin);
  freopen("so.out", "w", stdout);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  if (n <= 100) {
    solveSmall(n); // Dùng 2 vòng lặp for với n nhỏ
  } else {
    solveLarge(n); // Dùng prefix sum với n lớn
  }

  return 0;
}
