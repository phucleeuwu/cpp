#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DTB.INP","r", stdin);
    freopen("DTB.OUT","w", stdout);
    int t,l,h;
    cin>> t>> l>> h;
    float dtb;
    dtb=1.0*(t+l+h)/3;
    cout<< fixed<< setprecision(2)<< dtb;

}
