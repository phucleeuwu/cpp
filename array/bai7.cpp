#include <iostream>
#include <math.h>

using namespace std;

void xoa(int a[], int &n, int k){
    for(int i = k; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    --n;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, k = 4;
    xoa(a, n, k);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

