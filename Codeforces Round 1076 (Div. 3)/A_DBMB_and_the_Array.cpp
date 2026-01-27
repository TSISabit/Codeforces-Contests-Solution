#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, s, x; cin >> n >> s >> x;
    vector<int> a(n);
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i]; 
    }
    if(s < sum){
        no 
        return; 
    }
    int d = s - sum; 
    if(d % x == 0) yes else no 
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