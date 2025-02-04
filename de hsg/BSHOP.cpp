#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struct để lưu thông tin sản phẩm
struct Product {
    long long price; // Giá bán
    long long customers; // Số khách hàng
};

// Hàm so sánh để sắp xếp sản phẩm theo giá bán
bool compareByPrice(const Product& a, const Product& b) {
    return a.price < b.price;
}

int main() {
    freopen("de hsg/BSHOP.INP", "r", stdin);
    freopen("de hsg/BSHOP.OUT", "w", stdout);

    // Đọc số lượng sản phẩm
    int n;
    cin >> n;

    vector<Product> products(n);
    for (int i = 0; i < n; ++i) {
        cin >> products[i].price >> products[i].customers;
    }

    // Sắp xếp sản phẩm theo giá bán
    sort(products.begin(), products.end(), compareByPrice);

    // Đọc số lượng yêu cầu
    int q;
    cin >> q;

    while (q--) {
        long long x, y;
        cin >> x >> y;

        // Tìm kiếm khoảng giá [x, y] bằng binary search
        auto start = lower_bound(products.begin(), products.end(), Product{x, 0}, compareByPrice);
        auto end = upper_bound(products.begin(), products.end(), Product{y, 0}, compareByPrice);

        // Tìm sản phẩm có số khách hàng mua nhiều nhất trong khoảng
        long long maxCustomers = -1;
        long long bestPrice = 0;
        bool found = false;

        for (auto it = start; it != end; ++it) {
            if (it->customers > maxCustomers) {
                maxCustomers = it->customers;
                bestPrice = it->price;
                found = true;
            }
        }

        // Xuất kết quả
        if (found) {
            cout << bestPrice << " " << maxCustomers << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
