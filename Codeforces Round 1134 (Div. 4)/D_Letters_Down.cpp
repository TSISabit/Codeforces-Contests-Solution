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

bool palindrome(string s){
    int n = sz(s); 
    int i = 0, j = n - 1; 
    while(i < j){
        if(s[i] != s[j]) return false; 
        else {
            i++; j--; 
        }
    }
    return true; 
}
void solve() {
    read(n); 
    string s; cin >> s; 
    if(palindrome(s)){
        cout << 0 << nn; 
        return; 
    }

    vector<bool>a(25, false); 
    for(int i = 0; i < n; i++){
        int x = s[i] - 'a', y = s[n - i - 1] - 'a'; 

        for(int j = min(x, y); j < max(x, y); j++) a[j] = true; 
    }

    int cnt = 0; 
    for(int i = 0; i < 25; i++){
        if(a[i]) cnt++; 
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