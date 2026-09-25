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

void solve() {
    int n; char c; 
    cin >> n >> c; 
    string s; cin >> s; 

    int cnt = 0; 
    for(int i = 0; i < n / 2; i++){
        int j = n - 1 - i; 

        if(s[i] != s[j]){
            if(s[i] == c || s[j] == c) cnt++; 
            else cnt += 2; 
        }
    }

    cout << cnt << nn; 
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