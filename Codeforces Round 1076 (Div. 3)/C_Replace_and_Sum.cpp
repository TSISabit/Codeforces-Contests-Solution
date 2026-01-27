#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, q; 
    cin >> n >> q;
    vector<int> a(n + 1), b(n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> a[i]; 
    for(int i = 1; i <= n; i++) cin >> b[i];

    vector<int>suf(n + 2, 0);
    for(int i = n; i >= 1; i--) suf[i] = max({suf[i + 1], a[i], b[i]}); 

    vector<int>pre(n + 1, 0);
    for(int i = 1; i <= n; i++) pre[i] = pre[i - 1] + suf[i]; 

    while(q--){
        int l, r; 
        cin >> l >> r; 
        int ans = pre[r] - pre[l - 1];
        cout << ans << " ";
    }
    cout << nn;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}