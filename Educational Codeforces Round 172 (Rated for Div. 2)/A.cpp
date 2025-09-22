#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
#include<math.h>
#include<algorithm>
#include<ctime>
#include<set>
long long bigmod (int n, int p, int md) {
if (p == 0) return 1;
long long ans= bigmod(n, p / 2, md);
ans = (ans * ans) % md;
if (p % 2 == 1) ans = (ans * n) % md;
return ans;
}
long long pinverse (int num, int md) {
return bigmod(num, md - 2, md);
}

using namespace std;
#define ll int32_t
#define int long long
#define mss map<string,string>
#define msi map<string,int>
#define mii map<int,int>
#define nx '\n'

#define sa size()
#define fd long double
#define pb push_back
#define ppb pop_back
#define  bo toupper
#define  lo tolower




void shanto()
{
    string  v = "bos";
    int contry = 0;
}

const int m = 1e9 + 7;
const int mod = 1073741824;
#define slo cin.tie(0)->sync_with_stdio(0);

int32_t main()
{

int t;cin>>t;
while(t--)
{
	int n,k;cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	int sum=0;
	int coin = 0;
	int i=0;
	for(i=0;i<n&&sum<=k;i++)
	{
		if(sum+a[i]<=k)
		{
			sum+=a[i];
		}else
		{
			coin+=(k-sum);
			sum=k;

		}

	}
	 if (sum < k) {
	coin += (k - sum);
	 }

	cout<<coin<<nx;
}

return 0;
}

