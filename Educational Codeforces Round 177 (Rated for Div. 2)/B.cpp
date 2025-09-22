#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    long long S_a = 0;

    for (long long &val : a) {
        cin >> val;
        S_a += val;
    }

    vector<long long> suf_a(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        suf_a[i] = suf_a[i + 1] + a[i];
    }

    long long total_count = 0;
    for (int j = 0; j < n; ++j) {
        long long current_suf_sum = suf_a[j];
        long long Y = x - current_suf_sum;

        if (Y <= 0) {
            total_count += k;
        } else if (S_a > 0) {
            long long k_prime_min = (Y + S_a - 1) / S_a;
            total_count += max(0LL, k - k_prime_min);
        }
    }

    cout << total_count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
