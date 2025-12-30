#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    bool has_2025 = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '5')
        {
            has_2025 = true;
            break;
        }
    }

    int mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        int cur = 0;
        if (s[i] != '2') cur++;
        if (s[i + 1] != '0') cur++;
        if (s[i + 2] != '2') cur++;
        if (s[i + 3] != '6') cur++;

        mn = min(cur, mn); 
    }

    int mnn = (has_2025 ? 1 : 0);

    cout << min(mn, mnn) << nn; 
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}