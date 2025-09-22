#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int calculateScore(vector<int>& marbles) {
    map<int, int> frequency;
    for (int marble : marbles) {
        frequency[marble]++;
    }

    vector<int> counts;
    for (auto& entry : frequency) {
        counts.push_back(entry.second);
    }

    sort(counts.rbegin(), counts.rend()); // Sort in descending order

    int aliceScore = 0, alicePoints = 0, totalMarbles = 0;
    bool aliceTurn = true;

    for (int count : counts) {
        if (aliceTurn) {
            aliceScore++; // Alice gets a point for having at least one marble of this color
            if (count > 1) {
                alicePoints += min(2, count); // Maximize Alice's advantage
            }
        }
        totalMarbles += count;
        aliceTurn = !aliceTurn; // Switch turns
    }

    return aliceScore;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> marbles(n);
        for (int i = 0; i < n; ++i) {
            cin >> marbles[i];
        }

        cout << calculateScore(marbles) << endl;
    }

    return 0;
}

