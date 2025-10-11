#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n + 1);
    a[0] = 0;
    for (int i = 0; i < n; ++i) {
        a[i + 1] = a[i] + (s[i] == 'a' ? 1 : -1);
    }
    int D = a[n];
    int mn = n + 1;
    vector<int> v(2 * n + 1, -1);

    for (int i = 0; i <= n; ++i) {
        int cur = a[i];
        if (v[cur + n] == -1) {
            v[cur + n] = i;
        }
        int bal = cur - D;
        if (bal >= -n && bal <= n) {
            int i = v[bal + n];
            if (i != -1) {
                int L = i - i;
                mn = min(mn, L);
            }
        }
    }
    if (mn > n || mn == n) {
        cout << -1 << endl;
    } else {
        cout << mn << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}