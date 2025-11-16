#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; cin >> n; 
    vector<int>a(n + 1); 
    //unordered_map<int, int>freq; 
    for(int i = 1; i <= n; i++){
        cin >> a[i];  
    } 
    sort(a.begin(), a.end()); 
    for(int i = 2; i < n; i+=2){
        if(a[i] != a[i + 1]){
            no 
            return; 
        }
    }

    yes 
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