#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int a, b;
    cin >> a >> b;

    int mx = 0;
    int esum = 0; 
    int osum = 0;
    int cur = 1;  
    for (int i = 0; i < 25; i++) {
        if (i % 2 == 0) esum += cur;

        else osum += cur;
        
        if ((a >= esum && b >= osum) || (b >= esum && a >= osum)) mx = i + 1;
        
        else break;
        
        cur *= 2;
    }

    cout << mx << nn;
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