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
    read(n); 
    string s; cin >> s; 

    int z = count(all(s), '0'); 
    int o = count(all(s), '1'); 

    if(s[0] == '1'){
        cout << z << nn; 
        return; 
    }

    int cnt = 0, mn = LLONG_MAX; 
    for(int i = 0; i < n; i++){
        if(s[i] == '1') cnt++; 
        else cnt--; 
        mn = min(mn, cnt); 
    }

    cout << z + mn << nn; 
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