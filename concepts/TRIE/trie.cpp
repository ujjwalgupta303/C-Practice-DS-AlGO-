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

struct Trie {
	struct Trie *child[26];
	bool isEnd;
	Trie()
	{
		memset(child,0,sizeof(child));
		isEnd=false;
	}
};

struct Trie *root;

void insert(string s)
{
	struct Trie* cur=root;
	for(auto ch:s)
	{
		// check for edge
		if(cur->child[ch-'a']==NULL)
			cur->child[ch-'a']=new Trie();
		cur=cur->child[ch-'a'];
	}
	cur->isEnd=true;
}

bool searchForString(string s)
{
	struct Trie* cur=root;
	for(auto ch:s)
	{
		if(cur->child[ch-'a']==NULL)
			return false;
		else
			cur=cur->child[ch-'a'];
	}
	return cur->isEnd;
}

void solve()
{
	// No. of strings
	lli n;
	cin>>n;
	string s;
	root=new Trie();
	while(n--)
	{
		cin>>s;
		insert(s);
	}

	// strings to be searched in TRIE
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(searchForString(s))
		{
			cout<<s<<" present int our trie\n";
		}
		else
		{
			cout<<s<<" not present in our trie\n";
		}
	}

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	IOS;
	// lli t;
	// cin >> t;
	// while (t--)
		solve();
	return 0;
}