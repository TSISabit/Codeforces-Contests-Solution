#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; cin >> n; 
    vector<int>a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    int x = 0, y = 0; 

    bool ok = false; 
    for(int i = 0; i < n && !ok; i++){
        for(int j = i + 1; j < n; j++){
            if((a[j] % a[i]) % 2 == 0){
                x = a[i]; 
                y = a[j]; 
                ok = true; 
                break; 
            }
        }
    }
    
    if(ok) cout << x << ' ' << y << endl;
    else cout << -1 << endl; 
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