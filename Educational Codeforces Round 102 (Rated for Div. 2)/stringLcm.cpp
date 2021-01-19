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
	string a,b;
	cin>>a>>b;
	if(a.size()==b.size())
	{
		if(a==b)
		{
			cout<<a<<"\n";
			return;
		}
		else
		{
			cout<<"-1\n";
			return;
		}
	}
	// always taking smaller string in b
	if(b.size()>a.size())
	{
		swap(a,b);
	}

	lli sz1=a.size();
	lli sz2=b.size();
	lli lcmLength=(sz1*sz2)/__gcd(sz1,sz2);
	string tmp;
	lli k=0;
	f(i,0,lcmLength-1)
	{
		tmp+=b[k++];
		k%=sz2;
	}
	// RESULTANT LCM 
	// cout<<tmp<<"\n";
	k=0;
	f(i,0,lcmLength-1)
	{
		if(tmp[i]!=a[k++])
		{
			cout<<"-1\n";
			return;
		}
		k%=sz1;
	}
	cout<<tmp<<"\n";

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
