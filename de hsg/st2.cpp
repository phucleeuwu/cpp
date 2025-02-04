#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_N = 1000;
const int LOG = 10; // log2(MAX_N)

// Bảng thưa
int st[MAX_N][LOG];

// Hàm xây dựng bảng thưa
void buildSparseTable(const vector<int>& arr, int n) {
    // Bước 1: Gán giá trị cho khoảng 2^0 (k = 0)
    for (int i = 0; i < n; i++) {
        st[i][0] = arr[i];
    }

    // Bước 2: Duyệt qua các giá trị k từ 1 đến log2(n)
    for (int k = 1; (1 << k) <= n; k++) {
        for (int i = 0; i + (1 << k) - 1 < n; i++) {
            st[i][k] = min(st[i][k - 1], st[i + (1 << (k - 1))][k - 1]);
        }
    }
}

// Hàm trả lời truy vấn: Tìm min từ l đến r
int query(int l, int r) {
    int k = log2(r - l + 1);
    return min(st[l][k], st[r - (1 << k) + 1][k]);
}

int main() {
    vector<int> arr = {8, 5, 3, 9, 7, 3, 4, 2};
    int n = arr.size();

    // Xây dựng bảng thưa
    buildSparseTable(arr, n);

    // Trả lời truy vấn
    int l = 2, r = 5; // Ví dụ: Tìm min từ chỉ số 2 đến chỉ số 5
    cout << "Min từ " << l << " đến " << r << " là: " << query(l, r) << endl;

    return 0;
}
