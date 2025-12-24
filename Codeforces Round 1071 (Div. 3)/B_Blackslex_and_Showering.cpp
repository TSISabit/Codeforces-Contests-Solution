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
    vector<int>dif(n - 1); 
    for(int i = 0; i + 1 < n; i++) dif[i] = abs(a[i] - a[i + 1]); 

    int sum = accumulate(all(dif), 0LL); 

    int mx = 0; 
    mx = max(mx, dif[0]); 
    mx = max(mx, dif[n - 2]); 

    for(int i = 1; i + 1 < n; i++){
        int g = dif[i - 1] + dif[i] - abs(a[i - 1] - a[i + 1]); 
        mx = max(mx, g); 
    }

    cout << sum - mx << nn; 
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