/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/* ======================================
Author    : TSI_Sabit
Region    : Bangladesh
Bangladesh University of Business and Technology
 ====================================== */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long int
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nx "\n"
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define rep0(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define debug(x) cout << #x << " = " << x << endl;
#define dbg(x) cerr << #x << " = " << x << endl;
#define dbg2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl;
#define dbgv(v) cerr << #v << " = ["; for (auto i : v) cerr << i << " "; cerr << "]\n";
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define setbit(x) __builtin_popcountll(x)
#define parity(x) __builtin_parityll(x)
#define clz(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctzll(x)

#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
const double PI = acos(-1);

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void Solve() {
    int n, m;
    cin >> n >> m;
    vector<pii> v;
    int mx = 0;

    rep0(i, n) {
        rep0(j, m) {
            int x;
            cin >> x;
            if (x > mx) {
                mx = x;
                v.clear();
                v.pb({i, j});
            } else if (x == mx) {
                v.pb({i, j});
            }
        }
    }

    unordered_set<int> rows;
    for (auto p : v) {
        int row = p.fi;
        rows.insert(row);
    }

    bool ok = false;

    for (int r : rows) {
        int col = -1;
        bool valid = true;
        for (auto p : v) {
            int ri = p.fi;
            int ci = p.se;
            if (ri == r) continue;
            if (col == -1) col = ci;
            else if (ci != col) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ok = true;
            break;
        }
    }
    if(ok) cout << mx - 1 << nx; 
    else cout << mx<< nx; 
}

int32_t main() {
    fastIO();
#ifdef LOCAL
    auto start = chrono::high_resolution_clock::now();
#endif

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    cerr << "Time: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms\n";
#endif

    return 0;
}
