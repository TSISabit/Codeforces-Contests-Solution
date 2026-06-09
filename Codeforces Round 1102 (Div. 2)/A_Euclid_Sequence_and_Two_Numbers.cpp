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
    sort(rall(a));  
    bool ok = true; 
    for(int i = 2; i < n; i++){
        if(a[i] != a[i - 2] % a[i - 1]){
            ok = false; 
            break; 
        }
    }
    if(ok) cout << a[0] << " " << a[1] << nn; 
    else cout << -1 << nn; 
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