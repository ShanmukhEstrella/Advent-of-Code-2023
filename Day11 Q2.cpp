//Shanmukh//
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define mod 14000000007
#define pub push_back
#define fastio() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
  fastio()
  string s,dot;
  vector<string> vs;
  vector<pair<ll,ll>> v;
  vector<ll> r;
  vector<ll> c;
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
      r.pub(i);
    }
  }
  //ll n=140+r.size();
  for(ll j=0;j<140;j++)
  {
    ll hola=0;
    for(ll i=0;i<140;i++)
    {
      if(vs[i][j]=='.')
      {
        hola++;
      }
    }
    if(hola==140)
    {
      c.pub(j);
    }
  }
  for(ll i=0;i<140;i++)
  {
    for(ll j=0;j<140;j++)
    {
      if(vs[i][j]=='#')
      {
        v.pub({i,j});
      }
    }
  }
  //cout<<endl;
  // for(auto i : v)
  // {
  //   cout<<i.first<<" "<<i.second<<endl;
  // }
  // cout<<endl;
  // for(auto i : r)
  // {
  //   cout<<i<<endl;
  // }
  // cout<<endl;
  // for(auto i : c)
  // {
  //   cout<<i<<endl;
  // }
  // cout<<endl;
  ll n=v.size();
  ll req=0;
  for(ll i=0;i<n;i++)
  {
    for(ll j=i+1;j<n;j++)
    {
      //req=req+abs(a-b)+ (0)+abs(c2-d2) + (0);
      ll row=0;
      ll column=0;
      ll a=v[i].first;
      ll b=v[j].first;
      ll c2=v[i].second;
      ll d2=v[j].second;
      for(ll k=0;k<r.size();k++)
      {
        if(a<=b)
        {
          if(r[k]>a&&r[k]<b)
          {
            row++;
          }
        }
        else
        {
          if(r[k]>b&&r[k]<a)
          {
            row++;
          }
        }
      }
      for(ll k=0;k<c.size();k++)
      {
        if(c2<=d2)
        {
          if(c[k]>c2&&c[k]<d2)
          {
            column++;
          }
        }
        else
        {
          if(c[k]>d2&&c[k]<c2)
          {
            column++;
          }
        }
      }
      // cout<<endl;
      // cout<<row<<" "<<column<<endl;
      // cout<<endl;
      req=req+abs(a-b)+ (row)*(999999)+abs(c2-d2) + (column)*(999999);
    }
  }
  cout<<req<<endl;
}
int main()
{
  solve();
}
