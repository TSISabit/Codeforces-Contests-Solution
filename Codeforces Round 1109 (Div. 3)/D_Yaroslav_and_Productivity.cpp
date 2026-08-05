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
    int n, m; 
    cin >> n >> m; 
    vi a(n + 1), b(m + 1); 
    for(int i = 1; i <= n; i++) cin >> a[i]; 

    b[0] = 0; 
    for(int i = 1; i <= m; i++) cin >> b[i];

    sort(b.begin() + 1, b.end()); 

    int ans = 0, last = 1; 
    for(int i = 1; i <= m; i++){
        int sum = 0; 
        while(last <= b[i]){
            sum += a[last]; 
            last++; 
        }
        ans += abs(sum); 
    } 
    while(last <= n){
        ans += a[last]; 
        last++; 
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