#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool isIncreasing(const string &s){
    for(int i = 1; i < (int)s.size(); i++){
        if(s[i] <= s[i-1]) return false;
    }
    return true;
}

void solve() { //Failed
    int n; 
    cin >> n;
    string s; 
    cin >> s;

    int z = count(all(s), '0'); 
    int o = count(all(s), '1'); 
    if(isIncreasing(s)){
        cout << "Bob\n";
        return;
    }
    if(o == n || z == n){
        cout << "Bob\n"; 
        return; 
    }
    cout << "Alice\n";
    cout << 2 << nn;
    cout << 1 << " " << n << nn;
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