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
    if(n == 1){
        cout << 1 << nn; 
        return; 
    }
    else if(n == 2){
        cout << 9 << nn; 
        return; 
    }
    else if(n == 3){
        cout << 29 << nn; 
        return; 
    }
    else if(n == 4){
        cout << 56 << nn; 
        return; 
    }
    else{
        cout << 5 * n * n - 5 * n - 5 << nn; 
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