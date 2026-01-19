#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin >> n; 
    vector<int>a(n); 
    set<int>st; 
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        st.insert(a[i]); 
    }
    int mx = 0, cur = 0, pre = LLONG_MIN; 

    for(int i : st){
        if(i == pre + 1) cur++; 
        else cur = 1; 
        mx = max(mx, cur); 
        pre = i; 
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