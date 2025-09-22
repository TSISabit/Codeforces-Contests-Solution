/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/* ======================================
Author     : TSI_Sabit
Region     : Bangladesh
Bangladesh University of Business and Technology
====================================== */
#include <bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<unordered_set>
#include<set>
#include <queue>
#include <stack>
#include <map>
#include <list>
#include <deque>
#include <bitset>
#include <numeric>
#include <iterator>
#include <utility>
#include <iomanip>
using namespace std;
#define ll long long
void Solve() {
    int n, m;
        cin >> n >> m;
        vector<int> l1(n + 1, 0);
        
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            l1[x]++;
        }
        
        for (int i = n - 1; i > 0; i--) {
            l1[i] += l1[i + 1];
        }
        
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            long long a1 = l1[i];
            long long a2 = l1[n - i];
            int tmp = (i >= n - i) ? i : (n - i);
            ans += a1 * a2 - l1[tmp];
        }
        cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while (t--) {
        Solve();
    }
    return 0;
}