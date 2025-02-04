#include <iostream>
using namespace std;

void leftRotate(int a[], int n)
{
    int tmp = a[0];
    for(int i = 0; i < n-1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = tmp;
}

int main()
{
    int a[10] ={1,2,3,4,5,6,7,8,9,10};
    leftRotate(a,10);
    for(int i =0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}
