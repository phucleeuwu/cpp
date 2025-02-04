#include <iostream>
#include <math.h>

using namespace std;

void chen(int a[], int & n, int k, int x){
    for(int i = n - 1; i >= k; i--){
        a[i + 1] = a[i];
    }
    a[k] = x;
    ++n;
}

int main(){
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, k = 4;
    chen(a, n, k, 28);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
