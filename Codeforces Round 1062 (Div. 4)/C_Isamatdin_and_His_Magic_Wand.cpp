#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; 
    cin >> n; 
    vector<int>a(n); 
    bool even = false, odd = false; 

    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(a[i] % 2 == 0) even = true;  
        else odd = true; 
    }
    if(even && odd) sort(a.begin(), a.end()); 
    for(int i = 0; i < n; i++) cout << a[i] << ' '; 
    cout << endl; 
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