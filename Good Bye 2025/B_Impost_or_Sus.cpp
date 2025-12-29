#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    string s; cin >> s; 
    int cnt = 0; 

    if(s[0] == 'u'){
        s[0] = 's'; 
        cnt++; 
    }
    for(int i = 1; i < s.size(); i++){
        if(s[i] == 'u' && s[i - 1] == 'u'){
            s[i] = 's'; 
            cnt++; 
        }
    }

    if(s[s.size() - 1] == 'u'){
        s[s.size() - 1] = 's'; 
        cnt++; 
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