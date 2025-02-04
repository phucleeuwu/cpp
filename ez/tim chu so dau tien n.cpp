#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,dem;

    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    cin>> n;
    string str_n = to_string(n);
    int k = str_n[0] - '0';

    dem = 0;
    for (char digit : str_n) {
        if (digit - '0' == k) {
            dem++;
        }
    }
    cout <<k<<" "<<dem<<endl;

}
