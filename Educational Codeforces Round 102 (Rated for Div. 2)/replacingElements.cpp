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
	lli n,d;
	cin>>n>>d;
	vector<lli> a(n);
	lli flag=1;
	f(i,0,n-1)
	{
		cin>>a[i];
		if(a[i]>d)
			flag=0;
	}
	if(flag)
	{
		cout<<"YES\n";
		return;
	}
	sort(a.begin(),a.end());
	lli s1,s2;
	s1=a[0];
	s2=a[1];

	if(s1+s2<=d)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	


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