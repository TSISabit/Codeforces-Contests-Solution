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
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>
#define pb push_back
#define ppb pop_back

void solve() {
    read(n); 
    readv(a, n); 

    sort(all(a)); 

    bool diff = false; 
    if(a[0] == a[n - 1]){
        cout << "0 0" << nn; 
        return;
    }
    // if(!diff){
    //     cout << "0 0" << nn; 
    //     return; 
    // }

    int mn = 0, l = 0, r = n - 1; 
    while(l < r){
        mn += (a[r] - a[l]); 
        l++; 
        r--; 
    }

    int mnO = a[n - 1] - a[0]; 

    cout << mn << " " << mnO << nn; 
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