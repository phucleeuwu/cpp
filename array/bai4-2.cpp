#include <iostream>
#include <math.h>

using namespace std;

bool fibo(int n)
{
    long long F[100];
    F[0] = 0; F[1] = 1;
    for (int i = 2; i <= 92; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    for (int i =0; i <= 92; i++){
        if (n == F[i]) return 1;
    }
    return 0;
}
int main()
{
    int n; cin >> n;
    int a[n];
    int dem = 0;
    for (int i=0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i< n; i++)
    {
        if (fibo(a[i]))
        ++ dem;
    }
    cout << dem;
}

