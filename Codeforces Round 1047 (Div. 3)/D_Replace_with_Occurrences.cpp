#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        // Map frequency -> indices with that frequency
        map<int, vector<int>> freqMap;
        for (int i = 0; i < n; i++) {
            freqMap[b[i]].push_back(i);
        }

        vector<int> a(n);
        int currentNum = 1;
        bool possible = true;

        // Loop over all frequencies in the map
        for (map<int, vector<int>>::iterator it = freqMap.begin(); it != freqMap.end(); ++it) {
            int freq = it->first;
            vector<int> indices = it->second;
            int groupSize = indices.size();

            if (groupSize % freq != 0) {
                possible = false;
                break;
            }

            // Assign numbers in groups of size = freq
            for (int i = 0; i < groupSize; i++) {
                a[indices[i]] = currentNum;
                if ((i + 1) % freq == 0) currentNum++;
            }
        }

        if (!possible) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++)
                cout << a[i] << (i + 1 == n ? "\n" : " ");
        }
    }

    return 0;
}
