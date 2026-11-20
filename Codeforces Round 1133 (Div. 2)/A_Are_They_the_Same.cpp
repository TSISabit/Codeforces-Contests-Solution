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
    int n, k; cin >> n >> k; 
    readv(a, n); readv(b, n); 
    int cnt = 0; 
    int oddA = 0, oddB = 0, evenA = 0, evenB = 0; 
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) evenA++; 
        else oddA++; 
        if(b[i] % 2 == 0) evenB++; 
        else oddB++; 
    }

    if(k % 2 == 0){
        if(evenB >= evenA) yes else no
    }
    else{
        if(evenB <= evenA) yes else no 
    }
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