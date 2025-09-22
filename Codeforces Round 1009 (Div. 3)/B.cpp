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
    priority_queue<int> pq;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        int new_x = a + b - 1;
        pq.push(new_x);
    }

    cout << pq.top() << endl;

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