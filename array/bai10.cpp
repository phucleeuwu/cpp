#include <iostream>
using namespace std;

int cnt[1000001];

int main()
{
    int a[10] = {1,2,3,1,1,2,0,3,5,8};
    int max_val= INT_MIN;
    for(int i=0; i < 10; i++)
    {
        cnt[a[i]] = 1;
        max_val = max(max_val, a[i]);

    }
    int ans = 0;
    for(int i=0; i<= max_val; i++)
    {
        if(cnt[i])
        {
            ++ans;
        }
    }
    cout << ans << endl;
}
