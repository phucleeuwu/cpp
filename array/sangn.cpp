#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
const int maxn = 1e7+1;
int prime[maxn];

void sangnguyento()
{
    prime[1] = 1;
    for(int i =2; i <= sqrt(maxn); i++)
    {
        if (prime[i] == 0)
        {
            for(int j = i * i; j <= maxn; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
}
int main()
{
    freopen("so.inp","r", stdin);
    freopen("so.out", "w", stdout);
    int t; cin >> t;
    sangnguyento();
    while(t--)
    {
        int n; cin >> n;
        if(prime[n]==0) cout << "Yes"  << endl;
        else cout << "NO" << endl;
    }

}
