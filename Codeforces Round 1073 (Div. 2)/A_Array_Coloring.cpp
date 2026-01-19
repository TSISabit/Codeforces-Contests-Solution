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
    vector<int>a(n), pos(n + 1); 
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        pos[a[i]] = i; 
    }
    bool ok = true; 
    for(int i = 1; i < n; i++){
        if(pos[i] % 2 == pos[i + 1] % 2){
            ok = false; 
            break; 
        }
    }
    if(ok) yes else no 
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