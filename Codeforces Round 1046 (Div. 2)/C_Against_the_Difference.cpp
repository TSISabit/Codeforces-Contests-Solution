#include <bits/stdc++.h>
using namespace std;

struct Seg {
    int l, r, w;
    bool operator<(const Seg &o) const {
        return r < o.r; // sort by end
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Store positions of each number
        vector<vector<int>> pos(n + 1);
        for (int i = 0; i < n; ++i) pos[a[i]].push_back(i);

        // Build segments
        vector<Seg> segs;
        for (int v = 1; v <= n; ++v) {
            const auto &p = pos[v];
            int c = (int)p.size();
            for (int t = v; t <= c; ++t) {
                segs.push_back({p[t - v], p[t - 1], v});
            }
        }

        if (segs.empty()) {
            cout << 0 << "\n";
            continue;
        }

        // Sort segments by their ending index
        sort(segs.begin(), segs.end());

        // Fenwick Tree / BIT for range max queries
        vector<int> BIT(n + 1, 0);

        auto update = [&](int idx, int val) {
            for (++idx; idx <= n; idx += idx & -idx) BIT[idx] = max(BIT[idx], val);
        };

        auto query = [&](int idx) {
            int res = 0;
            for (++idx; idx > 0; idx -= idx & -idx) res = max(res, BIT[idx]);
            return res;
        };

        int ans = 0;
        for (auto &s : segs) {
            int best_before = s.l > 0 ? query(s.l - 1) : 0;
            int current = best_before + s.w;
            update(s.r, current);
            ans = max(ans, current);
        }

        cout << ans << "\n";
    }
    return 0;
}
