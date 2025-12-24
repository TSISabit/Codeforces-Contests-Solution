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
    // sort(all(a)); 

    // int mx = a[0]; 

    // int ans = LLONG_MAX; 
    // for(int i = 1; i < n; i++){
    //     int gap = a[i] - mx;
    //     int m = mx; 
    //     for(int j = 1; j * j <= gap; j++){
    //         if(gap % j == 0){
    //             int x1 = j; 
    //             int x2 = gap / j; 
    //             if(x1 > mx) m = max(m, x1); 
    //             if(x2 > mx) m = max(m, x2); 
    //         }
    //     } 
    //     ans = min(ans, m); 
    // }

    // if(ans == LLONG_MAX) ans = mx; 
    // cout << ans << nn; 

    int mn = *min_element(all(a)); 
    int ans = LLONG_MAX; 
    for(int i = 0; i < n; i++){
        if(a[i] == mn) continue;
        int gap = a[i] - mn; 
        int mx = max(mn, gap);
        ans = min(ans, mx);   
    }

    if(ans == LLONG_MAX) ans = mn; 
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