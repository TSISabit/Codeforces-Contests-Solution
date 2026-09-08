#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>

void solve() {
    int x, y, k; 
    cin >> x >> y >> k; 

    int d = y - x; 
    if(d == 0){
        cout << 0 << nn; 
        return; 
    }
    int l = x, r = x + k - 1; 
    int ans = 0; 

    int m = min(r, d); 
    for(int i = l; i <= m; i++) ans += (d % i); 

    int mx = max(l, d + 1); 
    if(mx <= r){
        int cnt = r - mx + 1; 
        ans += (cnt * d); 
    }

    cout << ans << nn;
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