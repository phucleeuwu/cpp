#include <iostream>
using namespace std;
int x[11], d[11], a[11], n, k;

void init ()
{
    cin >> k >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void output()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[x[i]] << " ";
    }
    cout << endl;
}

void tim(int i)  // Hàm đệ quy để sinh các tổ hợp
{
    for (int j = 1; j <= n; j++)  // Duyệt qua từng vị trí trong mảng
    {
        if (d[j] == 0)  // Kiểm tra xem vị trí j đã được chọn chưa
        {
            x[i] = j;   // Lưu vị trí j vào tổ hợp hiện tại
            d[j] = 1;   // Đánh dấu vị trí j đã được sử dụng
            if (i == k)  // Nếu đã chọn đủ k phần tử
            {
                output();  // In ra tổ hợp hiện tại
            }
            else tim(i + 1);  // Nếu chưa đủ k phần tử thì tiếp tục đệ quy
            d[j] = 0;   // Đặt lại trạng thái để thử các tổ hợp khác
        }
    }
}

int main()
{
    freopen("so.inp", "r", stdin);
    freopen("so.out", "w", stdout);
    init();
    tim(1);
}

/*
tim(1)
├── j=1: x[1]=1, d[1]=1
│   ├── tim(2)
│   │   ├── j=2: x[2]=2, output: 1 2
│   │   └── j=3: x[2]=3, output: 1 3
│   └── d[1]=0
├── j=2: x[1]=2, d[2]=1
│   ├── tim(2)
│   │   ├── j=1: x[2]=1, output: 2 1
│   │   └── j=3: x[2]=3, output: 2 3
│   └── d[2]=0
└── j=3: x[1]=3, d[3]=1
    ├── tim(2)
    │   ├── j=1: x[2]=1, output: 3 1
    │   └── j=2: x[2]=2, output: 3 2
    └── d[3]=0
*/
