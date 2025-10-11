#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; 
    cin >> n; 
    set<int>st; 
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        st.insert(x); 
    }
    cout << st.size() << endl; 
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