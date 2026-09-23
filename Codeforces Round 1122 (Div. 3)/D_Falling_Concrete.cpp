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
    readv(a, n); 
    vi b(n); 
    for(int i = 0; i < n; i++){
        b[i] = a[i] - (i + 1); 
    }

    sort(all(b)); 
    int cnt = 1, mx = 1; 

    for(int i = 1; i < n; i++){
        if(b[i] == b[i - 1]) continue; 

        if(b[i] == b[i - 1] + 1) cnt++; 
        else cnt = 1; 

        mx = max(mx, cnt); 
    }

    cout << mx << nn; 
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