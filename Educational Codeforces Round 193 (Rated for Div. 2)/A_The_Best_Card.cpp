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

const int N = 2e5 + 5;
bool is_prime[N];
void sieve(){
   fill(is_prime, is_prime + N, true);
   is_prime[0] = is_prime[1] = false;
   for(int i = 2; i * i < N; i++){
       if(is_prime[i]){
           for(int j = i * i; j < N; j += i){
               is_prime[j] = false;
           }
       }
   }
}

void solve() {
    
    read(n); 
    int x = n + 1; 
    if(is_prime[x]) yes else no 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sieve(); 
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}