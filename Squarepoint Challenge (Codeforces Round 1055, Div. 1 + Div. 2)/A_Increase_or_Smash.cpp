#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; 
    cin >> n; 
    unordered_set<int>st; 
    for(int i = 1; i <= n; i++){
        int x; 
        cin >> x; 
        st.insert(x); 
    }
    cout << st.size() * 2 - 1 << endl; 
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