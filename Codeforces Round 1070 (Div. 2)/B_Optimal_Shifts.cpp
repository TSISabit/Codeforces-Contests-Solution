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
    string s; cin >> s; 

    vector<int>pos; 
    for(int i = 0; i < n; i++){
        if(s[i] == '1') pos.push_back(i); 
    }

    if(pos.size() == n){
        cout << 0 << nn; 
        return; 
    }

    int ans = 0; 
    int k = pos.size(); 

    for(int i = 0; i < k; i++){
        int cur = pos[i]; 
        int nxt = pos[(i + 1) % k]; 

        int g = (nxt - cur - 1 + n) % n; 
        ans = max(ans, g); 
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