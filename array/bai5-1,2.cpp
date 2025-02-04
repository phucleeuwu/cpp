#include <iostream>
#include <math.h>
using namespace std;
//t a[10];
void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            swap (a[i], a[n-i-1]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n ; i++)
    {
        cin >> a[i];
    }
    reverse(a, n);
   /*or (int i=0; i<n; i++)
    {
        cout << a[i];
    }*/
    for(int b: a)
        cout << b << "  ";

}
