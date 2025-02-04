#include <iostream>
using namespace std;

void rightRotate(int a[], int n)
{
    int tmp = a[n-1];
    for(int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = tmp;
}

int main()
{
    int a[10] ={1,2,3,4,5,6,7,8,9,10};
    rightRotate(a,10);
    for(int i =0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}
