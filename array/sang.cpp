#include<iostream>
#include<math.h>
using namespace std;
const int maxn = 1e7+1;
int prime[maxn]  ;

int main()
{
    int n; cin >> n;
    prime[1] = 1;
    for(int i =2; i <= sqrt(n); i++)
    {
        if (prime[i] == 0)
        {
            for(int j = i * i; j <= n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(prime[i]==0) cout << i << " ";
    }
}
