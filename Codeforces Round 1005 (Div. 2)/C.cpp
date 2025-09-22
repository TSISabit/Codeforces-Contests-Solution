/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/////////////////////////////////
//         TSI_Sabit           //
//           BUBT              //
/////////////////////////////////
// Code Done by TSI_Sabit */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long maximum = 0;
    queue<pair<vector<int>, long long>> q;
    q.push({a, 0});

    while (!q.empty())
    {
        vector<int> ca = q.front().first;
        long long coins = q.front().second;
        q.pop();

        if (ca.empty())
        {
            maximum = max(maximum, coins);
            continue;
        }

        int m = ca.size();
        for (int i = 0; i < m; ++i)
        {
            long long nc = coins + abs(ca[i]);
            vector<int> a;

            if (ca[i] < 0)
            {
                a.assign(ca.begin(), ca.begin() + i);
            }
            else
            {
                a.assign(ca.begin() + i + 1, ca.end());
            }

            q.push({a, nc});
        }
    }
    cout << maximum << endl;
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

// Got TLE 
