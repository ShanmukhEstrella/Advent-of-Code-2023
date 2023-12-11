//Shanmukh//
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define mod 1000000007
#define pub push_back
#define fastio() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
  fastio()
  vector<pair<ll,ll>> v;
  vector<string> vs;
  string dot;
  string s;
  for(ll i=0;i<140;i++)
  {
    dot.pub('.');
  }
  for(ll i=0;i<140;i++)
  {
    cin>>s;
    vs.pub(s);
    if(s==dot)
    {
      vs.pub(s);
    }
  }
  ll n=vs.size();
  //cout<<n<<endl;
  //cout<<vs[0].length();
  for(ll j=0;j<vs[0].length();j++)
  {
    ll hola=0;
    for(ll i=0;i<n;i++)
    {
      if(vs[i][j]=='.') hola++;
    }
    if(hola==n)
    {
      for(ll i=0;i<n;i++)
      {
        vs[i].insert(j,".");
      }
      j++;
    }
  }
  // cout<<endl;
  for(auto i : vs)
  {
    cout<<i<<endl;
  }
  for(ll i=0;i<n;i++)
  {
    for(ll j=0;j<vs[0].size();j++)
    {
      if(vs[i][j]=='#')
      {
        v.pub({i,j});
      }
    }
  }
  ll req=0;
  n=v.size();
  for(ll i=0;i<n;i++)
  {
    for(ll j=i;j<n;j++)
    {
      req=req+abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
    }
  }
  cout<<req<<endl;
}
int main()
{
  solve();
}
