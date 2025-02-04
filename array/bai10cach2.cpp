#include <iostream>
using namespace std;

const int maxc = 1e6+1;
int C[maxc];
int main()
{
    int n,x; cin >> n;
    int maxa= INT_MIN; int mina= INT_MAX;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        C[a[i]]=1;
    }
    //cout <<maxa<<" "<<mina<<endl;
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if (C[a[i]]==1)
        {
            cout << a[i] << " ";
            C[a[i]] =0;
        }
    }
    //cout << dem;
}
