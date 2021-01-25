#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define lli long long int
#define f(i,a,b) for (lli i = a; i <= b; i++)
#define fr(i,a,b) for (lli i = a; i >= b; i--)
#define sl(x)	scanf("%lld",&x)
#define pl(x)	printf("%lld",x)
#define ss(s)	scanf("%s",s)
#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
	string s;
	cin>>s;
	if(s.size()<10)
	{
		cout<<"NO\n";
		return;
	}


	lli c1=-1,c2=-1,c3=-1,c4=-1;
	f(i,1,s.size()-2)
	{
		if(c1==1 && c2==1)
		{
			if(c3==1 && c4==1)
			{
				cout<<"YES\n";
				return;
			}
		}
		if(s[i]>=97 && s[i]<=122)
		{
			c1=1;
			continue;
		}
		if(s[i]>=65 && s[i]<=90)
		{
			c2=1;
			continue;
		}
		if(s[i]>='0' && s[i]<='9')
		{
			c3=1;
			continue;
		}
		// 35 => #
		// 37 => %
		// 38 => &
		// 63 => ?
		// 64 => @
		if(s[i]==35 || s[i]==37 ) 
		{
			c4=1;
			continue;
		}
		if(s[i]==38 || (s[i]>=63 && s[i]<=64))
		{
			c4=1;
			continue;	
		}
	}
	if((s[0]>=97 && s[0]<=122) || (s[s.size()-1]>=97 && s[s.size()-1]<=122))
	{
		c1=1;
	}
	if((c1==1 && c2==1) && (c3==1 && c4==1))
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	IOS;
	lli t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}