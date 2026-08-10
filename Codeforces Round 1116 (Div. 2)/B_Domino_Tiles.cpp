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
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>


const int MOD = 998244353; 
bool check(string &s, int start, int first){
	for(int i = start; i < sz(s); i += 2){
		int step = (i - start) / 2; 
		int ex = first ^ (step % 2); 
		if(s[i] != '?' && (s[i] - '0') != ex) return false; 
	}
	return true; 
}
void solve() {
	read(n); 
	string s; 
	cin >> s; 
	int odd = check(s, 0, 0) + check(s, 0, 1); 
	int even = check(s, 1, 0) + check(s, 1, 1); 

	int ans = (odd * even); 

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