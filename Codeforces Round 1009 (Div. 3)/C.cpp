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
    int a;
    cin >> a;
    if ((a & (a - 1)) == 0 || (a & (a + 1)) == 0)
    {
        cout << "-1\n";
        return;
    }

    int x = __builtin_ctz(a);
    int y = 0;
    while ((a & (1 << y)) != 0)
    {
        y++;
    }

    int arr = (1 << x) | (1 << y);
    cout << arr << '\n';
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