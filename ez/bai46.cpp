#include<iostream>

using namespace std;

int main ()
{
    int n, k;
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    cin >> n;
    int n_bandau =n;
    while (n>=10)
    {
        n/=10;
    }
    int dau_tien=n;
    int dem =0;
    while (n_bandau !=0)
    {
        k = n_bandau %10;
        if (dau_tien ==k) dem++;
        n_bandau /=10;
    }
    cout << dau_tien << " "<< dem;
}
