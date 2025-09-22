/*Bismillahir-Rahmanir Rahim
Assalamualaikum
/* ======================================
Author    : TSI_Sabit
Region    : Bangladesh
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
    int n, k, p;
    cin >> n >> k >> p;

    int maximum = n * p;
    int minimum = n * (-p);

    if (k < minimum || k > maximum) {
        cout << -1 << "\n";
        return;
    }

    int ops = (abs(k) + p - 1) / p; 
    
    cout << ops << "\n";
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