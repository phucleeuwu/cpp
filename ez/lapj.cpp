#include <bits/stdc++.h>
using namespace std;

int main() {
  float s1 = 0, s2 = 0, s3 = 2020.0, s4 = 2020.0, s5 = 2020.0, s6 = 2020.0,
        s7 = 2020.0, s8 = 2020.0, t9 = 1, t10, s11 = 0;
  float s12 = 0, s13 = 0, s14 = 0, s15 = 0, s16 = 0, s17 = 0;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    s1 += i;
    s2 += i * i;
    s3 += 1.0 / i;
    s4 += 1.0 / (i * 2);
    s5 += 1.0 / (i * 2 + 1);
    s6 += 1.0 / (i * (i + 1));
    s7 += (i * 1.0) / (i + 1);
    s8 += (2.0 * i + 1) / (2 * i + 2);
    t9 *= i;
    t10 = pow(n, i);
    int gt11 = 1;
    gt11 *= i;
    s11 += gt11;
    s12 += pow(n, i);
    s13 += pow(n, 2 * i);
    s14 += pow(n, 2 * i + 1);
    int gt15 = 0;
    gt15 += i;
    s15 += 1.0 / gt15;
    s16 += pow(n, i) * 1.0 / gt15;
    s17 += pow(n, i) * 1.0 / gt11;
  }

 /* cout << s1 << "\n"
       << s2 << "\n"
       << s3 << "\n"
       << s4 << "\n"
       << s5 << "\n"
       << s6 << "\n";
  cout << s7 << "\n" << s8 << "\n" << t9 << "\n" << t10 << "\n" << s11;

  cout << s1 << "\n"
       << s12 << "\n"
       << s13 << "\n"
       << s14 << "\n"
       << s15 << "\n"*/
       cout<< s16 << "\n"
       << s17 << "\n";
}
