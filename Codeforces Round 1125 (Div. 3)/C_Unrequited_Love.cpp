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
#define pb push_back
#define ppb pop_back

void solve() {
    read(n); 
    vi a(n + 1); 
    for(int i = 1; i <= n; i++) cin >> a[i]; 

    int triad = n - 4; 
    vi v(triad + 1); 
    map<int, int> cnt; 

    for(int i = 1; i <= triad; i++){
        v[i] = a[i] + a[i + 2] - a[i + 4]; 
        cnt[v[i]]++; 
    }

    int ans = 0; 
    for(auto p : cnt){
        int x = p.second; 
        ans += (x * (x - 1) / 2); 
    }

    for(int i = 1; i <= triad; i++){
        if(i + 2 <= triad && v[i] == v[i + 2]) ans--; 
        if(i + 4 <= triad && v[i] == v[i + 4]) ans--; 
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