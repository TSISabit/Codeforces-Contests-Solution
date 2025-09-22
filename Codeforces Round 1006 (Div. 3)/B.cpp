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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int dash = 0, underscore = 0;

    for (char c : s)
    {
        if (c == '-')
            dash++;
        else if (c == '_')
            underscore++;
    }

    if (dash < 2 || underscore == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        ll x1 = dash / 2; 
        ll x2 = dash - x1; 

        ll ans = max(x1 * underscore * x2, x2 * underscore * x1); 
        cout << ans << endl; 
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