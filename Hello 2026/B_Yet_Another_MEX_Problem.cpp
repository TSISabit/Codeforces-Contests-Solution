#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, k; 
    cin >> n >> k; 

    vector<int>a(n); 
    set<int>st; 

    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        st.insert(a[i]); 
    }
    
    int cnt = 0; 

    while(st.count(cnt)) cnt++; 

    cout << min(cnt, k - 1) << nn; 
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