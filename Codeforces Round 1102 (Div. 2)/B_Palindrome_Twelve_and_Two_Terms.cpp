#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

bool isPalindrom(int x){
    string s = to_string(x); 
    string t = s; 
    reverse(all(t)); 
    return s == t; 
}
void solve() {
    int n; cin >> n; 
    if(n < 22){
        for(int i = 0; i <= n; i++){
            if(isPalindrom(i) && (n - i) % 12 == 0){
                cout << i << " " << n - i << nn; 
                return; 
            }
        }
        cout << -1 << nn; 
        return; 
    }
    int rem = n % 12;
    int a;

    if (rem <= 9) a = rem;
    else if (rem == 10) a = 22;
    else a = 11;

    cout << a << " " << n - a << '\n';

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