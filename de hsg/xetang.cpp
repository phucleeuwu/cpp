#include <iostream>
#include <vector>
using namespace std;

// Hàm kiểm tra xem độ dài `length` của xe tăng có hợp lệ không
bool isValid(const vector<int>& land, int M, int length) {
    int currentSum = 0;

    // Tính tổng độ cứng của đoạn đầu tiên có độ dài `length`
    for (int i = 0; i < length; i++) {
        currentSum += land[i];
    }

    // Nếu tổng ban đầu < M, đoạn này không hợp lệ
    if (currentSum < M) return false;

    // Duyệt qua các đoạn còn lại bằng cách trượt cửa sổ
    for (int i = length; i < land.size(); i++) {
        currentSum += land[i] - land[i - length]; // Cập nhật tổng
        if (currentSum < M) return false; // Nếu bất kỳ đoạn nào < M, không hợp lệ
    }

    return true; // Tất cả các đoạn đều hợp lệ
}

int main() {
    int M, n;
    cin >> M >> n;

    vector<int> land(n);
    for (int i = 0; i < n; i++) {
        cin >> land[i];
    }

    // Tìm độ dài nhỏ nhất sử dụng binary search
    int left = 1, right = n, result = n;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (isValid(land, M, mid)) {
            result = mid;   // Nếu hợp lệ, cập nhật kết quả
            right = mid - 1; // Thử tìm đoạn ngắn hơn
        } else {
            left = mid + 1; // Nếu không hợp lệ, thử đoạn dài hơn
        }
    }

    cout << result << endl;
    return 0;
}
