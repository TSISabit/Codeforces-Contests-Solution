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

    int cur = a[0], mx = a[0]; 
    for(int i = 1; i < n; i++){
        if(abs(a[i]) % 2 == abs(a[i - 1]) % 2) cur = a[i]; 
        else cur = max(a[i], cur + a[i]); 
        mx = max(mx, cur); 
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