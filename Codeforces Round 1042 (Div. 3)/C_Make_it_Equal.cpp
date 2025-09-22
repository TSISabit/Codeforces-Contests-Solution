#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> S(n), T(n);
        for (auto &x : S) cin >> x;
        for (auto &x : T) cin >> x;

        if (k == 0) {
            cout << (S == T ? "YES\n" : "NO\n");
            continue;
        }

        // group by remainder mod k
        map<long long, vector<long long>> ms, mt;
        for (auto &x : S) ms[x % k].push_back(x);
        for (auto &x : T) mt[x % k].push_back(x);

        bool ok = true;
        if (ms.size() != mt.size()) ok = false;
        else {
            for (auto &p : ms) {
                auto r = p.first;
                if (!mt.count(r) || p.second.size() != mt[r].size()) {
                    ok = false;
                    break;
                }
                sort(p.second.begin(), p.second.end());
                sort(mt[r].begin(), mt[r].end());
                if (p.second != mt[r]) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
