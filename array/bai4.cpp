#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long F[100];
    F[0] = 0; F[1] = 1;
    int dem =0;
    for (int i = 2; i <= 93; i++) {
        F[i] = F[i - 1] + F[i - 2];
        //cout <<i<<"   " << F [i] << endl;
        ++dem ;
    }
    for (int i = 0; i <= 93; i++) {
        cout <<i<<"   " << F [i] << endl;}
   /* long long n; cin >> n;}
    for (int i = 0; i <= 92; i++) {
        if (F[i] == n) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";*/
   // cout << pow(10,10);
}
