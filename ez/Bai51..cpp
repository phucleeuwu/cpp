#include <iostream>
using namespace std;
int main()
{
    int n;
    int n_bandau = n;
    freopen("so.inp","r",stdin);
    freopen("so.out","w",stdout);
    cin>>n;

    while (n >= 10)
    {
        if (n % 10 <= (n / 10) % 10) {cout <<"NO"; return 0;};
        n /= 10;
    }

    cout<<"YES";
}
