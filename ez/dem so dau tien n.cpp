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
    char k = str_n[0] ;

    dem = 0;
    for (char digit : str_n) {
        if (digit == k) {
            dem++;
        }
    }
    cout <<k<<" "<<dem<<endl;

}
