#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, a; 
    cin >> n >> a; 
    vector<int> v(n); 
    
    int less = 0, greater = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] < a) less++;
        else if(v[i] > a) greater++;
    }

    if(less > greater) cout << a - 1 << nn;
    else cout << a + 1 << nn;
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