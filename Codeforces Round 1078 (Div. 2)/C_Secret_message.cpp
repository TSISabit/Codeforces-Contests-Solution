#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n, k; 
    cin >> n >> k; 
    vector<string> s(k); 

    for(int i = 0; i < k; i++) cin >> s[i];
    bool found = false;

    for(int i = 1; i <= n && !found; i++){
        if(n % i != 0) continue;
        string pat = ""; 
        for(int j = 0; j < i; j++){
            set<char>st; 
            for(char c = 'a'; c <= 'z'; c++) st.insert(c); 

            for(int l = j; l < n; l += i){
                set<char>idx; 
                for(int h = 0; h < k; h++) idx.insert(s[h][l]); 
                for(char c = 'a'; c <= 'z'; c++){
                    if(st.find(c) != st.end() && idx.find(c) == idx.end()) st.erase(c); 
                }
            }
            if(st.empty()){
                pat = ""; 
                break; 
            }
            pat += *st.begin(); 
        }
        if(pat != ""){
            string ans = ""; 
            int rep = n / i; 
            for(int r = 0; r < rep; r++) ans += pat; 
            cout << ans << nn; 
            found = true; 
        }
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