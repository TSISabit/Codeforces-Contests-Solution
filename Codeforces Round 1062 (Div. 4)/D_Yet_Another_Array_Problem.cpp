#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int g = a[0];
    for (int i = 1; i < n; i++) {
        g = __gcd(g, a[i]);
    }

    int ans = -1;
    for (int i = 2; i <= 100; i++) { 
        if (__gcd(g, i) == 1) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
