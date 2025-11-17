#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; cin >> n; 
    vector<int>a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int sum = 0, mx = 0; 
    for(int i = 0; i < n - 1; i++){
        int v = max(a[i], a[i + 1]); 
        sum += v; 
        mx = max(mx, v); 
    }

    int last = max(a[0], a[n - 1]); 
    sum += last; 
    mx = max(mx, last); 

    cout << sum - mx << endl; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}