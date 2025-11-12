#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; 
    cin >> n; 
    vector<int>a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    int x; 
    cin >> x; 
    int mx = *max_element(a.begin(), a.end()); 
    int mn = *min_element(a.begin(), a.end()); 

    if(x < mn || x > mx) no else yes 
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