#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>
#define pb push_back
#define ppb pop_back

void solve() {
    read(n); string s; cin >> s; 

    vi st; 
    vector<bool>pr(n + 1, false); 

    for(int i = 1; i <= n; i++){
        char c = s[i - 1]; 
        if(c == '1') st.pb(i); 
        else if(c == '2') {
            if(!st.empty()){
                pr[st.back()] = true; 
                st.ppb(); 
            } else pr[i] = true; 
        }
        else if(c == '3') pr[i] = true; 
    }

    vi npr; 
    for(int i = 1; i <= n; i++){
        if(!pr[i]) npr.pb(i); 
    }

    cout << sz(npr) << nn; 
    for(int i : npr) cout << i << " "; 
    cout << nn; 
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