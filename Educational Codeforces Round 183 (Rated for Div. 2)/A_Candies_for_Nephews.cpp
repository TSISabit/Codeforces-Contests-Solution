#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; 
    cin >> n; 
    if(n % 3 == 0) cout << 0 << endl; 
    else cout << 3 - (n % 3) << endl; 
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