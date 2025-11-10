#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int r, x, d, n; 
    cin >> r >> x >> d >> n; 
    string s; 
    cin >> s; 

    int cnt = 0; 
    for(auto c : s){
        if(c == '1'){
            cnt++; 
            r = max(0LL, r - d); 
        }
        else if(r < x){
            cnt++; 
            r = max(0LL, r - d); 
        }
    }
    
    cout << cnt << endl; 
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