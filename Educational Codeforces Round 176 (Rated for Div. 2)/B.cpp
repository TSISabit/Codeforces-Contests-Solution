/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/* ======================================
Author    : TSI_Sabit
Region    : Bangladesh
Bangladesh University of Business and Technology
 ====================================== */
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
#include <unordered_set>
#include <set>
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
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (k == 1)
    {
        if (n == 2)
        {
            cout << a[0] + a[1] << "\n";
        }
        else
        {
            int b = a[0], d = a[n - 1];
            vector<int> c(a.begin() + 1, a.end() - 1);
            int max_c = *max_element(c.begin(), c.end());
            cout << max(max_c + max(b, d), b + d) << "\n";
        }
    }
    else
    {
        sort(a.rbegin(), a.rend());
        int sum = 0;
        for (int i = 0; i < k + 1; i++)
        {
            sum += a[i];
        }
        cout << sum << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}