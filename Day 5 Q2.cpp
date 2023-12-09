#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
using namespace std;
int main()
{ 
ll a,b,c,flag,dummy1,dummy2,shannu;
ll mini=INT_MAX;
vector<pair<ll,ll>> seeds;
for(ll i=0;i<20;i++)
{
    cin>>dummy1>>dummy2;
    seeds.pub({dummy1,dummy2});
}
vector<vector<ll>> lst(47);
for(ll i=0;i<47;i++)
    {
        cin>>a>>b>>c;
        lst[i].pub(a);lst[i].pub(b);lst[i].pub(c);
    }
vector<vector<ll>> lst1(18);
for(ll i=0;i<18;i++)
    {
        cin>>a>>b>>c;
        lst1[i].pub(a);lst1[i].pub(b);lst1[i].pub(c);
    }
vector<vector<ll>> lst2(12);
for(ll i=0;i<12;i++)
    {
        cin>>a>>b>>c;
        lst2[i].pub(a);lst2[i].pub(b);lst2[i].pub(c);
    }
vector<vector<ll>> lst3(49);
for(ll i=0;i<49;i++)
    {
        cin>>a>>b>>c;
        lst3[i].pub(a);lst3[i].pub(b);lst3[i].pub(c);
    }
vector<vector<ll>> lst4(30);
for(ll i=0;i<30;i++)
    {
        cin>>a>>b>>c;
        lst4[i].pub(a);lst4[i].pub(b);lst4[i].pub(c);
    }
vector<vector<ll>> lst5(23);
for(ll i=0;i<23;i++)
    {
        cin>>a>>b>>c;
        lst5[i].pub(a);lst5[i].pub(b);lst5[i].pub(c);
    }
vector<vector<ll>> lst6(43);
for(ll i=0;i<43;i++)
    {
        cin>>a>>b>>c;
        lst6[i].pub(a);lst6[i].pub(b);lst6[i].pub(c);
    }
for(ll i=0;i<10;i++)
{
    for(ll j=seeds[i].first;j<seeds[i].first+seeds[i].second;j++)
    {
        shannu=j;
        for(ll k=0;k<47;k++)
        {

            if(shannu>=lst[k][1]&&shannu<lst[k][1]+lst[k][2])
            {
                shannu=lst[k][0]+(shannu-lst[k][1]);

                break;
            }
        }
        for(ll k=0;k<18;k++)
        {

            if(shannu>=lst1[k][1]&&shannu<lst1[k][1]+lst1[k][2])
            {
                shannu=lst1[k][0]+(shannu-lst1[k][1]);

                break;
            }
        }
        for(ll k=0;k<12;k++)
        {
            if(shannu>=lst2[k][1]&&shannu<lst2[k][1]+lst2[k][2])
            {
                shannu=lst2[k][0]+(shannu-lst2[k][1]);
                break;
            }
        }
        for(ll k=0;k<49;k++)
        {
            if(shannu>=lst3[k][1]&&shannu<lst3[k][1]+lst3[k][2])
            {
                shannu=lst3[k][0]+(shannu-lst3[k][1]);
                break;
            }
        }
        for(ll k=0;k<30;k++)
        {
            flag=1;
            if(shannu>=lst4[k][1]&&shannu<lst4[k][1]+lst4[k][2])
            {
                shannu=lst4[k][0]+(shannu-lst4[k][1]);
                flag=0;
                break;
            }
        }
        for(ll k=0;k<23;k++)
        {
            flag=1;
            if(shannu>=lst5[k][1]&&shannu<lst5[k][1]+lst5[k][2])
            {
                shannu=lst5[k][0]+(shannu-lst5[k][1]);
                flag=0;
                break;
            }
        }
        for(ll k=0;k<43;k++)
        {
            flag=1;
            if(shannu>=lst6[k][1]&&shannu<lst6[k][1]+lst6[k][2])
            {
                shannu=lst6[k][0]+(shannu-lst6[k][1]);
                flag=0;
                break;
            }
        }
        if(shannu<mini) mini=shannu;
    }
}
cout<<mini<<endl;
}

