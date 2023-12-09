//Shanmukh
#include<bits/stdc++.h>
#define pub push_back
#define ll long long int
#define endl '\n'
#define mod 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
  //fastio()
	string s,a,b,c;
	s="LRRRLRRLLRRLRRLRRLRRLRLLRLRLLRRLRLRRRLRRLRRLLRLRLRLRRRLRRRLLRLRRRLLRRRLRLLRRRLLRRLRLRLRRRLLRRLRRRLLRRLRLRRRLLRRRLRRLRLRRRLLRRLRRRLRRLLRRLRRLRRRLRRRLRRRLRRLRRRLLRLRLRLRRRLRRLRRRLRRLRLRRLRLRRRLRRRLRRLRRRLLRRRLLRRLRLRRRLRLRLRRRLRLRLRLRRLRLRRLRRLLRRRLRLLRRLRRRLRRRLLRRLRLLLLRRLRRRR";
	map<string,pair<string,string>> mp;
	string starti,endi;
	for(ll i=0;i<750;i++)
	{
		cin>>a>>b>>c;
		mp[a]={b,c};
		//cout<<6<<endl;
	}
	starti="AAA";
	endi="ZZZ";
	//cout<<start<<" "<<end<<endl;
	ll req=0;
	string s2=starti;
	ll flag=0;
	// for(auto i : mp)
	// {
	// 	cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
	// }
	//ll p=0;
	while(1)
	{
		ll n=s.length();
		for(ll j=0;j<n;j++)
		{
			if(s2==endi)
			{
				flag=1;
				break;
			}
			if(s[j]=='R')
			{
				s2=(*mp.find(s2)).second.second;
				//cout<<s2<<endl;
				req++;
			}
			else
			{
				s2=(*mp.find(s2)).second.first;
				//cout<<s2<<endl;
				req++;
			}
		}
		// p++;
		// if(p==1) break;
		if(flag==1) break;
		//cout<<2<<endl;
	}
	cout<<req<<endl;
}
int main()
{
  solve();
}
