#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int a, b, n; cin >> a >> b >> n; 
    if(a == b){
        cout << 1 << endl; 
        return; 
    }
    if(b * n > a) cout << 2 << endl; 
    else cout << 1 << endl; 
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