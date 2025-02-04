#include <iostream>
using namespace std;

int main(){
    int n,k,q;
    cin >> n>>k>>q;
   if (n/k/q <  n*1.0 /k/q ){
    cout << "so thung banh: " << (n /k/q) +1 << "\n";
    cout << "so hop banh: "<< (n/k) +1;
   }
   else  {


    cout << "so thung banh: " << n /k/q << "\n";
    cout << "so hop banh: "<< n/k;
   }
}
