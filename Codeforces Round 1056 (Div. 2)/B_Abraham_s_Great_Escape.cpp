#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n, k;
    cin >> n >> k;

    int total = n * n;
    if (total - k == 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<string> vs(n, string(n, ' '));
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cnt < k)
            {
                vs[i][j] = 'U';
                cnt++;
            }
            else if (i < n - 1)
            {
                vs[i][j] = 'D';
            }
            else
            {
                vs[i][j] = (j == n - 1) ? 'L' : 'R';
            }
        }
    }

    for (auto &x : vs) cout << x << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}