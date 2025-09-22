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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n - 2; i++)
    {
        cin >> a[i];
    }
    if (sizeof(a) <= 2)
    {
        cout << "YES" << "\n";
    }
    int c = 0;
    for (int i = 1; i < n - 3; i++)
    {
        if (a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1)
        {
            c = 1;
            break;
        }
        else
        {
            c = 0;
        }
    }
    if (c == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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