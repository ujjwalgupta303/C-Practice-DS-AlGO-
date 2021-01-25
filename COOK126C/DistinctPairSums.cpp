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
// 	cout<<"Hello\n";
	lli l,r;
	cin>>l>>r;
	l=2*l;
	r=2*r;
	cout<<r-l+1<<"\n";
// 	set<lli> s;
// 	f(i,l,r)
// 	s.insert(2*i);

// 	f(i,l,r)
// 	{
// 		f(j,i+1,r)
// 		s.insert(i+j);
// 	}
// 	cout<<s.size()<<"\n";
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("ip.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	IOS;
	lli t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}