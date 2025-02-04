#include <iostream>
#include <math.h>
using namespace std;
bool ngto (int n)
{
    if (n < 2) return 0;
    for(int i=2; i <= sqrt(n); i++)
        if (n%i ==0) return 0;
    return 1;
}
int main()
{
    int n; cin >> n;
    if (ngto(n)) cout<< n << "ngto";
    else cout <<n<< "ko ";
    return 0;
}
