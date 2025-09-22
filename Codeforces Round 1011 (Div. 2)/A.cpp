#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout << "NO" << "\n";
#define yes cout << "YES" << "\n";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string xn = s;
        reverse(xn.begin(), xn.end());

        if (s < xn)
        {
            cout << "yes" << "\n";
            continue;
        }

        int first = n / 2;
        int second = (n % 2 == 1) ? first + 1 : first;

        sort(s.begin(), s.begin() + first);
        sort(s.begin() + second, s.end(), greater<char>());

        int i = 0, l = n - 1;
        while (k > 0 && i < l)
        {
            swap(s[i], s[l]);
            i++;
            l--;
            k--;
        }

        string x = s;
        reverse(x.begin(), x.end());

        if (s < x)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
