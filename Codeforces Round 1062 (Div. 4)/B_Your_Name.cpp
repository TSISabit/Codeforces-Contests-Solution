#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; 
    string s, t; 
    cin >> n >> s >> t; 
    sort(s.begin(), s.end()); 
    sort(t.begin(), t.end()); 

    if(s == t) yes else no 
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