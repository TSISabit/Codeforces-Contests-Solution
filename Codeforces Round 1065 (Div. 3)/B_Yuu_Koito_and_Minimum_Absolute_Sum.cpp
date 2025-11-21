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
    int l = a[0], r = a[n - 1]; 

    if(l == -1 && r == -1){
        l = 0; r = 0; 
    }

    else if(l == -1) l = r; 
    else if(r == -1) r = l; 

    int ans = abs(l - r);
    a[0] = l; 
    a[n - 1] = r; 
    
    for(int i = 1; i < n - 1; i++){
        if(a[i] == -1) a[i] = 0; 
    }

    cout << ans << nn; 
    for(int i = 0; i < n; i++) cout << a[i] << ' '; 
    cout << nn;  
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