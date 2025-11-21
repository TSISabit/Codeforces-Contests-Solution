#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    string s; 
    cin >> s; 
    int n = s.size(); 
    int l = count(all(s), '<'); 
    int r = count(all(s), '>'); 

    for(int i = 0; i < n - 1; i++){
        if(s[i] != '<' && s[i + 1] != '>'){
            cout << -1 << nn;
            return; 
        }
    }
 
    cout << n - min(l, r) << nn; 
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