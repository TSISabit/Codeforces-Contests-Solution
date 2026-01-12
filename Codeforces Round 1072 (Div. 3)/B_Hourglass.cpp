#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int s, k, m; 
    cin >> s >> k >> m; 

    int f = m / k; 
    int last = f * k; 
    int rem = s; 

    if(k >= s) rem = s; 
    else{
        if(f % 2 == 0) rem = s; 
        else rem = k; 
    }

    int pass = m - last; 
    int ans = max(0LL, rem - pass);
    
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