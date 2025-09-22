/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/////////////////////////////////
//         TSI_Sabit           //
//           BUBT              //
/////////////////////////////////
Code Done by TSI_Sabit */
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
#include <unordered_set>
#include <set>
using namespace std;
#define ll long long

void Solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    if (count(s.begin(), s.end(), '1') == n) {
        cout << 1 << endl;
        return;
    }
    ll count = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
        {
            count += 1;
        }
    }
    if (s[0] == '1')
    {
        count++;
    }
    cout << count << endl;
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