#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

inline void solve() { 
    int n; cin >> n; 
    vector<int>a(n);
    map<int,int>freq; 
    int ans = 0; 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    for(int i = 0; i < n; i++){
        ans += freq[a[i]]; 
        if(a[i] == 1) ans += freq[2]; 
        else if(a[i] == 2) ans += freq[1]; 
        freq[a[i]]++; 
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