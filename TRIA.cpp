#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool tamgiac(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
bool tamgiaccan(int a, int b, int c) {
    return tamgiac(a, b, c) && (a == b || b == c || a == c);
}

int main() {
    freopen("TRIA.INP", "r", stdin);
    freopen("TRIA.OUT", "w", stdout);
    int n;
    cin >> n;
    int so[100005];
    for (int i = 0; i < n; i++) {
        cin >> so[i];
    }

    set<vector<int>> tamgiac_can;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int a = so[i], b = so[j], c = so[k];
                vector<int> canh = {a, b, c};
                sort(canh.begin(), canh.end());
                if (tamgiaccan(a, b, c)) {
                    tamgiac_can.insert(canh);
                }
            }
        }
    }
    cout << tamgiac_can.size() << endl;
    return 0;
}
