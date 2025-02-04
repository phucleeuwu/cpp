#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
  // while ( cin >> n)
  // {
    if (n<2) {cout << n << " ko ngto"; return 0;}
    for (int i=2; i <= sqrt (n); i++)
    {
        if (n % i == 0) {cout << n << " ko ngto"; return 0;}
    }
    //while (cin >> n)
    cout << n << " ngto";
  // }
    //return 0;

}


