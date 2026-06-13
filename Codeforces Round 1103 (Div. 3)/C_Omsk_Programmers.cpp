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

void solve() {
    read(a); read(b); read(x); 
    if(a == b){
        cout << 0 << nn; 
        return; 
    }

    vector<int>A; 
    int curA = a; 
    while(1){
        A.push_back(curA); 
        if(curA == 0) break; 
        curA /= x; 
    }
    
    vector<int>B; 
    int curB = b; 
    while(1){
        B.push_back(curB); 
        if(curB == 0) break; 
        curB /= x; 
    }

    int ans = abs(a - b); 
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < B.size(); j++){
            int cnt = i + j; 
            int add = abs(A[i] - B[j]); 
            int total = cnt + add; 

            if(total < ans) ans = total; 
        }
    }

    cout << ans << nn; 
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