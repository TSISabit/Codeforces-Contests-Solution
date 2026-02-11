#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dig_sum(int n){
    int sum = 0; 
    while(n > 0){
        sum += n % 10; 
        n /= 10; 
    }
    return sum; 
}
void solve() {
    int x; cin >> x; 
    int cnt = 0; 
    for(int i = x; i <= x + 100; i++){
        if( i - dig_sum(i) == x) cnt++; 
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