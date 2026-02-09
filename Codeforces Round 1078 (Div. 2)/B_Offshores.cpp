#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, x, y; 
    cin >> n >> x >> y;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0; 
    for(int i = 0; i < n; i++){
        sum += (a[i] / x) * y; 
    }
    int ans = LLONG_MIN; 
    for(int i = 0; i < n; i++){
        int send = (a[i] / x) * y;
        int shud = a[i] + (sum - send);
        ans = max(ans, shud);
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