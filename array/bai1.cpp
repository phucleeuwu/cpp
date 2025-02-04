#include<bits/stdc++.h>
using namespace std;

bool ngto(int n, int T)
{
    while (n!=0)
    {
        T+= n%10;
        n /= 10;
    }

    if (T < 2) return 0;
    for (int i =2; i<= sqrt(T); i ++)
    {
        if (T  % i == 0) return 0;
    }
    return 1;
}
int main()
{
    freopen("so.inp" , "r", stdin);
    freopen("so.out" , "w", stdout);
    int n; cin >> n;
    int a[n];
    int dem =0;
    for (int i=0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i < n; i++)
    {
        if(ngto(a[i]))
        {
            dem ++;
            cout<< a[i]<<" " ;


        }
    }
    cout<< "\n";
    cout << dem ;
}
