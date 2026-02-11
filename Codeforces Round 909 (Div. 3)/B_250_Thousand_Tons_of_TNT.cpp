#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin >> n; 
    vector<int>a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    int ans = 0; 

    for(int i = 1; i <= n; i++){
        if(n % i != 0) continue; //Invalid k
        int trucks = n / i; 
        if(trucks <= 1) continue;

        int mn = LLONG_MAX, mx = LLONG_MIN; 

        for(int j = 0; j < n; j += i){
            int sum = 0; 
            for(int k = j; k < i + j; k++) sum += a[k]; 
            mn = min(mn, sum); 
            mx = max(mx, sum); 
        }
        ans = max(ans, mx - mn); 
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