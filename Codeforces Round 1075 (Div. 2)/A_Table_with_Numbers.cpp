#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, h, l; 
    cin >> n >> h >> l;
    vector<int> a(n);
    int x = 0, y = 0, z = 0; 
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(a[i] <= l) x++;
        if(a[i] <= h) y++;
        if(a[i] <= l || a[i] <= h) z++;
    }
    int ans = min({x, y, z / 2}); 
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