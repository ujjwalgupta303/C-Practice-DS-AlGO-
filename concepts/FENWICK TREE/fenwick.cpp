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

void update(vector<lli>& fenwick,lli idx,lli val)
{
	// cout<<idx<<" ";
	while(idx<fenwick.size())
	{
		idx++;
		fenwick[idx]+=val;
		idx+=(idx&-idx);
	}
}

lli query(vector<lli>& fenwick,lli q)
{
	q++;
	lli sum=0;
	while(q>0)
	{
		sum+=fenwick[q];
		q-=(q&-q);
	}
	return sum;
}

void solve()
{
	lli n;
	cin>>n;
	lli val;
	vector<lli> fenwick(n+1,0);
	f(i,0,n-1)
	{
		cin>>val;
		update(fenwick,i,val);
	}

	lli l,r;
	lli q;
	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		cout<<query(fenwick,r)<<"\n";
		cout<<"sum from "<<l<<" to "<<r<<" : "<<query(fenwick,r)-query(fenwick,l-1);
		cout<<"\n";
	}
	// for(auto x:fenwick)
	// 	cout<<x<<" ";


}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	IOS;
	solve();
	return 0;
}