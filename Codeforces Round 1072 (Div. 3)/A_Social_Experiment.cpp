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
    if(n == 2){
        cout << 2 << nn; 
        return; 
    }
    if(n == 3){
        cout << 3 << nn; 
        return; 
    }
    if(n % 2 == 0) cout << 0 << nn; 
    else cout << 1 << nn; 
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