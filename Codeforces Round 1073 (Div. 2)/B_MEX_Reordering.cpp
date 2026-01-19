#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() { //Failed
    int n; cin >> n; 
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    int o = count(all(a), 1); 
    int z = count(all(a), 0);

    if(z > 0 && o > 0) yes 
    else if(z == 1 && o == 1) yes 
    else no 
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