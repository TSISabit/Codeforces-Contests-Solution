#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> dp(n, 0); 
    int cnt = 0, last= -k; 

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i - last >= k) {
                cnt++;
                last = i;
            } else {
                last = i;
            }
        }
    }

    cout << cnt << endl;
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