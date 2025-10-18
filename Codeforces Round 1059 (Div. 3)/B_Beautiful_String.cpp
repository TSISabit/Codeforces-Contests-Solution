#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n; string s;
    cin >> n >> s;

    vector<int> a;
    int pos = 1;
    for (char c : s) {
        if (c == '1') a.push_back(pos);
        pos++;
    }

    cout << a.size() << endl;
    
    if (!a.empty()) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    } else {
        cout << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
