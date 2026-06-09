#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, x, y, z; 
    cin >> n >> x >> y >> z; 

    int noAI = (n + (x + y) - 1) / (x + y);
    
    int useAI; 
    if(x * z >= n) useAI = (n + x - 1) / x; 
    else{
        int rem = n - x * z; 
        useAI = z + (rem + (x + 10 * y) - 1) / (x + 10 * y); 
    }

    cout << min(noAI, useAI) << nn; 
    // for(int)
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