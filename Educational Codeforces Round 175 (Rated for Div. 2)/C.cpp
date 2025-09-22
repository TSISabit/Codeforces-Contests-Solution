#include <bits/stdc++.h>
using namespace std;

#define int long long

// Function to solve each test case
int solve() {
    int n, k;
    cin >> n >> k; // Read the length of the strip and the maximum number of operations
    string s;
    cin >> s; // The string representing the target color (R or B)
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; // The penalty for each cell
    }
    
    // Create an array to store penalties of cells that need to be changed
    vector<int> penalties;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            penalties.push_back(a[i]);  // Penalty if the cell needs to be blue but is red
        }
    }
    
    // If there are no penalties, the answer is 0
    if (penalties.empty()) {
        return 0;
    }

    // Sliding window to find the minimum penalty
    int min_penalty = LLONG_MAX;
    for (int i = 0; i < penalties.size(); ++i) {
        for (int j = i; j < i + k && j < penalties.size(); ++j) {
            min_penalty = min(min_penalty, max(penalties[i], penalties[j]));  // Calculate final penalties
        }
    }
    return min_penalty;
}

// Main driver function
int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
