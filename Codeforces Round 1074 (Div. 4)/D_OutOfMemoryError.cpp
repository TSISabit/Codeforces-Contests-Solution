#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() { //TLE TLE TLE TLE TLE 
    int n, m, h; 
    cin >> n >> m >> h; 
    vector<int>a(n + 1), o(n + 1); 
    for(int i = 1; i <= n; i++){
        cin >> a[i]; 
        o[i] = a[i]; 
    }

    for(int i = 0; i < m; i++){
        int b, c; 
        cin >> b >> c; 
         
        a[b] += c; 
        bool check = false; 
        if(a[b] > h) check = true; 
        if(check) a = o; 
    }

    for(int i = 1; i <= n; i++) cout << a[i] << " "; 
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