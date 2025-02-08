#include <iostream>
#include <algorithm>
char a[1000][1000];
int n, m, k;
using namespace std;
bool xuly(char b[][1000], int l)
{
    char c[1000][1000];
    for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++)
            {
                    c[i][j]= b[i][j];
            }
    }
    int bom=0;
    for(int i =1; i<=n; i++){
        int j=1;
        while (j<=m){
                if (c[i][j] == 'x')
                {
                        bom++;
                        int dau = max(1,j-l);
                        int cuoi = min(m,j+2*l);
                        for (int t=dau; t<=cuoi; t++)
                        {
                            c[i][t]='.';
                        }
                }
               j++;
            }
    }

    for (int i=1; i<=n; i++)
    {
            for (int j=1; j<=m; j++)
            {
                 if ((c[i][j]=='x') || (bom>k)) return 0;
            }
    }
    return 1;
}

int ketqua(char a[][1000], int m)
{
    for (int l=1; l<=m; l++)
    {
        if (xuly(a,l)) return l;
    }
    return -1;
}

int main() {
    freopen("GBOMB.INP", "r", stdin);
    freopen("GBOMB.OUT", "w", stdout);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    cout << ketqua(a, m)<< endl;
    return 0;
}
