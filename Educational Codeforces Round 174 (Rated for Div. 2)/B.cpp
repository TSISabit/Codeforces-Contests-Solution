#include <bits/stdc++.h>
using namespace std; 
const int N = 705;
int a[N][N], n, m, T, pd[N * N], pd1[N * N], pd2;
int main()
{
    scanf("%d", &T);
    while (T--)
    {
        int ans = 0;
        pd2 = 0;
        scanf("%d %d", &n, &m);
        for (int i = 1; i <= n * m; i++)
            pd1[i] = pd[i] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);
                if (a[i][j] == a[i - 1][j] || a[i][j] == a[i][j - 1])
                {
                    ans += pd1[a[i][j]];
                    pd1[a[i][j]] = 0;
                    pd2 = 1;
                }
                ans += pd[a[i][j]];
                pd[a[i][j]] = 0;
            }
        }
        printf("%d\n", ans - 1 - pd2);
    }
    return 0;
}