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
#define sl(x)   scanf("%lld",&x)
#define pl(x)   printf("%lld",x)
#define ss(s)   scanf("%s",s)
#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct Trie {
   unordered_map<char,Trie*> m;
   bool isEnd;
   Trie()
   {
      isEnd=false;
   }
};

Trie *root;

void insert(string s)
{
   Trie* cur=root;
   for(auto ch:s)
   {
      if(!cur->m.count(ch)) // if ch not present in our map, create mapping of that char
      {
         cur->m[ch]=new Trie();
      }
      // if ch already present
      cur=cur->m[ch];
   }
   cur->isEnd=true;
}

bool searchString(string s)
{
   Trie *cur=root;
   for(auto ch:s)
   {
      if(!cur->m[ch])
         return false;
      else
         cur=cur->m[ch];
   }
   return cur->isEnd;
}

void solve()
{
   root=new Trie();
   lli n;
   cin>>n;
   string s;
   while(n--)
   {
      cin>>s;
      insert(s);
   }
   cin>>n;
   while(n--)
   {
      cin>>s;
      if(searchString(s))
      {
         cout<<s<<" present in our trie\n";
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
   solve();
   return 0;
}