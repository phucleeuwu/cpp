#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k ;
    cin >> n >> k;
    cout << "tong " << n + k << endl;
    cout << "hieu " << n - k << endl;
    cout << "tich " << (long long)n * k << endl;
    float a = n* 1.0 / k;
    cout << "thuong ";
    cout << fixed << setprecision(4) << a;



}

