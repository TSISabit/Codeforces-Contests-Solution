#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int a, b, c; 
    cin >> a >> b >> c; 
    int ans = a & b & c; 

    if((a & b) == ans && (b & c) == ans && (c & a) == ans) cout << "YES\n"; 
    else cout << "NO\n"; 
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