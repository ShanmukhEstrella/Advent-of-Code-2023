//Shanmukh
#include<bits/stdc++.h>
#define pub push_back
#define ll long long int
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
  fastio()
  ll req=1;
  ll a,b;
  ll dumm;
  for(ll i=0;i<4;i++)
  {
    dumm=0;
    cin>>a>>b;
    for(ll j=0;j<=a;j++)
    {
        if((j*(a-j))>b)
        {
            dumm++;
        }
    }
    req=req*dumm;
  }
  cout<<req<<endl;
}
int main()
{
  solve();
}
