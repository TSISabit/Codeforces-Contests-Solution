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
    read(n); readv(a, n); 
    sort(all(a)); 

    int mx = a[n - 1]; 
    vi left, mid, right; 
    int cnt = 0; 

    for(int i = 0; i < n; i++){
        if(i == 0 || a[i] != a[i - 1]) cnt = 1; 
        else cnt++; 

        if(cnt == 1) left.pb(a[i]); 
        else if(cnt == 2 && a[i] != mx) right.pb(a[i]); 
        else mid.pb(a[i]); 
    }

    reverse(all(right)); 
    int ans = sz(left) + sz(right); 

    if(!mid.empty() && mid.back() == mx) ans++; 

    cout << ans << nn; 
    for(int i : left) cout << i << " "; 
    for(int i : mid) cout << i << " "; 
    for(int i : right) cout << i << " "; 
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