//Shanmukh
#include<bits/stdc++.h>
#include<chrono>
#define pub push_back
#define ll long long int
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std::chrono;
using namespace std;
void solve()
{
	fastio()
	string s,s1;
	ll n,i,j;
	ll ind;
	ll req;
	ll p=0;
	req=0;
	vector<string> v;
	map<pair<ll,ll>,vector<ll>> mp;
	for(i=0;i<10;i++)
	{
		cin>>s;
		v.pub(s);
	}
	for(i=0;i<10;i++)
	{
		n=v[i].length();
		s1=v[i];
		string s2;
		for(j=0;j<n;j++)
		{
			if((s1[j]-'0'<=9 && s1[j]-'0'>=0))
			{
				s2.pub(s1[j]);
			}
			else
			{
				if(s2.length()==4)
				{
					p++;
				}
				else if(s2.length()==1)
				{
					ind=s2[0]-'0';
					if((j<n&&s1[j]=='*'))
					{
						mp[{i,j}].pub(ind);
					}
					if(((j-2)>=0&&s1[j-2]=='*'))
					{
						mp[{i,j-2}].pub(ind);
					}
					if((i+1<n&&j<n&&v[i+1][j]=='*'))
					{
						mp[{i+1,j}].pub(ind);
					}
					if((i+1<n&&j-1>=0&&v[i+1][j-1]=='*'))
					{
						mp[{i+1,j-1}].pub(ind);
					}
					if((i+1<n&&j-2>=0&&v[i+1][j-2]=='*'))
					{
						mp[{i+1,j-2}].pub(ind);
					}
					if((i-1>=0&&j<n&&v[i-1][j]=='*'))
					{
						mp[{i-1,j}].pub(ind);
					}
					if((i-1>=0&&j-1>=0&&v[i-1][j-1]=='*'))
					{
						mp[{i-1,j-1}].pub(ind);
					}
					if((i-1>=0&&j-2>=0&&v[i-1][j-2]=='*'))
					{
						mp[{i-1,j-2}].pub(ind);
					}
				}
				else if(s2.length()==2)
				{
					ind=(s2[0]-'0')*10+(s2[1]-'0');
					if((j<n&&s1[j]=='*'))
					{
						mp[{i,j}].pub(ind);
					}
					if((j-3>=0&&s1[j-3]=='*'))
					{
						mp[{i,j-3}].pub(ind);
					}
					if((i+1<n&&j<n&&v[i+1][j]=='*'))
					{
                        mp[{i+1,j}].pub(ind);
					}
					if((i+1<n&&j-1>=0&&v[i+1][j-1]=='*'))
					{
						mp[{i+1,j-1}].pub(ind);
					}
					if((i+1<n&&j-2>=0&&v[i+1][j-2]=='*'))
					{
						mp[{i+1,j-2}].pub(ind);
					}
					if((i+1<n&&j-3>=0&&v[i+1][j-3]=='*'))
					{
						mp[{i+1,j-3}].pub(ind);
					}
					if((i-1>=0&&j<n&&v[i-1][j]=='*'))
					{
						mp[{i-1,j}].pub(ind);
					}
					if((i-1>=0&&j-1>=0&&v[i-1][j-1]=='*'))
					{
						mp[{i-1,j-1}].pub(ind);
					}
					if((i-1>=0&&j-2>=0&&v[i-1][j-2]=='*'))
					{
						mp[{i-1,j-2}].pub(ind);
					}
					if((i-1>=0&&j-3>=0&&v[i-1][j-3]=='*'))
					{
						mp[{i-1,j-3}].pub(ind);
					}
				}
				else if(s2.length()==3)
				{
					ind=(s2[0]-'0')*100+(s2[1]-'0')*10+(s2[2]-'0');
					if((j<n&&s1[j]=='*'))
					{
						mp[{i,j}].pub(ind);
					}
					if((j-4>=0&&s1[j-4]=='*'))
					{
						mp[{i,j-4}].pub(ind);
					}
					if((i+1<n&&j<n&&v[i+1][j]=='*'))
					{
						mp[{i+1,j}].pub(ind);
					}
					if((i+1<n&&j-1>=0&&v[i+1][j-1]=='*'))
					{
						mp[{i+1,j-1}].pub(ind);
					}
					if((i+1<n&&j-2>=0&&v[i+1][j-2]=='*'))
					{
						mp[{i+1,j-2}].pub(ind);
					}
					if((i+1<n&&j-3>=0&&v[i+1][j-3]=='*'))
					{
						mp[{i+1,j-3}].pub(ind);
					}
					if((i+1<n&&j-4>=0&&v[i+1][j-4]=='*'))
					{
						mp[{i+1,j-4}].pub(ind);
					}
					if((i-1>=0&&j<n&&v[i-1][j]=='*'))
					{
						mp[{i-1,j}].pub(ind);
					}
					if((i-1>=0&&j-1>=0&&v[i-1][j-1]=='*'))
					{
						mp[{i-1,j-1}].pub(ind);
					}
					if((i-1>=0&&j-2>=0&&v[i-1][j-2]=='*'))
					{
						mp[{i-1,j-2}].pub(ind);
					}
					if((i-1>=0&&j-3>=0&&v[i-1][j-3]=='*'))
					{
						mp[{i-1,j-3}].pub(ind);
					}
					if((i-1>=0&&j-4>=0&&v[i-1][j-4]=='*'))
					{
						mp[{i-1,j-4}].pub(ind);
					}
				}
				s2.clear();
			}
		}
				if(s2.length()==4)
				{
					p++;
				}
				else if(s2.length()==1)
				{
					ind=s2[0]-'0';
					if((j<n&&s1[j]=='*'))
					{
						mp[{i,j}].pub(ind);
					}
					if(((j-2)>=0&&s1[j-2]=='*'))
					{
						mp[{i,j-2}].pub(ind);
					}
					if((i+1<n&&j<n&&v[i+1][j]=='*'))
					{
						mp[{i+1,j}].pub(ind);
					}
					if((i+1<n&&j-1>=0&&v[i+1][j-1]=='*'))
					{
						mp[{i+1,j-1}].pub(ind);
					}
					if((i+1<n&&j-2>=0&&v[i+1][j-2]=='*'))
					{
						mp[{i+1,j-2}].pub(ind);
					}
					if((i-1>=0&&j<n&&v[i-1][j]=='*'))
					{
						mp[{i-1,j}].pub(ind);
					}
					if((i-1>=0&&j-1>=0&&v[i-1][j-1]=='*'))
					{
						mp[{i-1,j-1}].pub(ind);
					}
					if((i-1>=0&&j-2>=0&&v[i-1][j-2]=='*'))
					{
						mp[{i-1,j-2}].pub(ind);
					}
				}
				else if(s2.length()==2)
				{
					ind=(s2[0]-'0')*10+(s2[1]-'0');
					if((j<n&&s1[j]=='*'))
					{
						mp[{i,j}].pub(ind);
					}
					if((j-3>=0&&s1[j-3]=='*'))
					{
						mp[{i,j-3}].pub(ind);
					}
					if((i+1<n&&j<n&&v[i+1][j]=='*'))
					{
                        mp[{i+1,j}].pub(ind);
					}
					if((i+1<n&&j-1>=0&&v[i+1][j-1]=='*'))
					{
						mp[{i+1,j-1}].pub(ind);
					}
					if((i+1<n&&j-2>=0&&v[i+1][j-2]=='*'))
					{
						mp[{i+1,j-2}].pub(ind);
					}
					if((i+1<n&&j-3>=0&&v[i+1][j-3]=='*'))
					{
						mp[{i+1,j-3}].pub(ind);
					}
					if((i-1>=0&&j<n&&v[i-1][j]=='*'))
					{
						mp[{i-1,j}].pub(ind);
					}
					if((i-1>=0&&j-1>=0&&v[i-1][j-1]=='*'))
					{
						mp[{i-1,j-1}].pub(ind);
					}
					if((i-1>=0&&j-2>=0&&v[i-1][j-2]=='*'))
					{
						mp[{i-1,j-2}].pub(ind);
					}
					if((i-1>=0&&j-3>=0&&v[i-1][j-3]=='*'))
					{
						mp[{i-1,j-3}].pub(ind);
					}
				}
				else if(s2.length()==3)
				{
					ind=(s2[0]-'0')*100+(s2[1]-'0')*10+(s2[2]-'0');
					if((j<n&&s1[j]=='*'))
					{
						mp[{i,j}].pub(ind);
					}
					if((j-4>=0&&s1[j-4]=='*'))
					{
						mp[{i,j-4}].pub(ind);
					}
					if((i+1<n&&j<n&&v[i+1][j]=='*'))
					{
						mp[{i+1,j}].pub(ind);
					}
					if((i+1<n&&j-1>=0&&v[i+1][j-1]=='*'))
					{
						mp[{i+1,j-1}].pub(ind);
					}
					if((i+1<n&&j-2>=0&&v[i+1][j-2]=='*'))
					{
						mp[{i+1,j-2}].pub(ind);
					}
					if((i+1<n&&j-3>=0&&v[i+1][j-3]=='*'))
					{
						mp[{i+1,j-3}].pub(ind);
					}
					if((i+1<n&&j-4>=0&&v[i+1][j-4]=='*'))
					{
						mp[{i+1,j-4}].pub(ind);
					}
					if((i-1>=0&&j<n&&v[i-1][j]=='*'))
					{
						mp[{i-1,j}].pub(ind);
					}
					if((i-1>=0&&j-1>=0&&v[i-1][j-1]=='*'))
					{
						mp[{i-1,j-1}].pub(ind);
					}
					if((i-1>=0&&j-2>=0&&v[i-1][j-2]=='*'))
					{
						mp[{i-1,j-2}].pub(ind);
					}
					if((i-1>=0&&j-3>=0&&v[i-1][j-3]=='*'))
					{
						mp[{i-1,j-3}].pub(ind);
					}
					if((i-1>=0&&j-4>=0&&v[i-1][j-4]=='*'))
					{
						mp[{i-1,j-4}].pub(ind);
					}
				}
				s2.clear();
	}
	//cout<<p<<endl;
	for(auto hola : mp)
	{
		if(hola.second.size()==2)
		{
			req=req+(hola.second[0]*hola.second[1]);
		}
	}
	cout<<req<<endl;
}
int main()
{
	solve();
}
