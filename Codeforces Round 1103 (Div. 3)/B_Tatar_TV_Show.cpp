#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;

void solve() {
    read(n); read(k); 
    string s; cin >> s; 
    // int o = count(all(s), '1'); 
    // if(o % 2 == 0) yes else no 
    bool ok = true; 
    vector<int>a(k, 0); 
    for(int i = 0; i < n; i++) a[i % k] += s[i] - '0'; 
    for(int i = 0; i < k; i++){
        if(a[i] % 2 != 0){
            ok = false; 
            break; 
        }
    }
    if(ok) yes else no 
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