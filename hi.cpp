#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
   string s;
   cin>>s;


   int defaultFrequency=0;
   char mostFreqChar;

   for(int i=0;i<s.size();i++)
   {
   	int count=0;
   	for(int j=0;j<s.size();j++)
   	{
   		if(s[j]==s[i])
   		{
   			count++;
   		}
   		if(count>=defaultFrequency)
   		{
   			count=defaultFrequency;
   			mostFreqChar=s[i];
   		}
   	}
   }
   cout<<mostFreqChar;
}