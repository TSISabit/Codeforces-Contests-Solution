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
    int n, x; cin >> n >> x; 
    readv(a, n); 
    if(x == 1){
        cout << 0 << nn; 
        return; 
    }

    int ans = 0, tmp = x; 
    for(int i = 2; i * i <= tmp; i++){
        if(tmp % i == 0){
            int sum = 0;
            
            for(int j = 0; j < n; j++){
                if(a[j] % i == 0) sum += a[j]; 
            }

            ans = max(ans, sum); 

            while(tmp % i == 0) tmp /= i; 
        }
    }

    if(tmp > 1){
        int sum = 0; 
        for(int i = 0; i < n; i++){
            if(a[i] % tmp == 0) sum += a[i]; 
        }

        ans = max(ans, sum); 
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