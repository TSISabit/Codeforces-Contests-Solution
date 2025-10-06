#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == k) {
        cout << string(n, '-') << endl;
        return;
    }
    int z = count(s.begin(), s.end(), '0'); 
    int o = count(s.begin(), s.end(), '1');
    int t = count(s.begin(), s.end(), '2');

    string ans(n, '+');
    for (int i = 1; i <= z; i++) {
        if (i <= n) {
            ans[i - 1] = '-';
        }
    }
    for (int i = n - o + 1; i <= n; i++) {
        if (i >= 1) {
            ans[i - 1] = '-';
        }
    }
    for (int i = z + 1; i <= z + t; i++) {
        if (i >= 1 && i <= n && ans[i - 1] != '-') {
            ans[i - 1] = '?';
        }
    }
    for (int i = n - o - t + 1; i <= n - o; i++) {
        if (i >= 1 && i <= n && ans[i - 1] != '-') {
            ans[i - 1] = '?';
        }
    }

    cout << ans << endl;
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