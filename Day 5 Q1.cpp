#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
using namespace std;
int main()
{
ll a,b,c,flag;
vector<ll> seeds;
for(ll i=0;i<20;i++)
{
    cin>>a;
    seeds.pub(a);
}
ll n=20;
vector<ll> soil(n,0),fert(n,0),water(n,0),light(n,0),temp(n,0),humid(n,0),location(n,0);
//getline(cin,s);
vector<vector<ll>> lst(47);
for(ll i=0;i<47;i++)
    {
        cin>>a>>b>>c;
        lst[i].pub(a);lst[i].pub(b);lst[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<47;j++)
    {
        vector<ll> s1=lst[j];
            if(seeds[i]>=s1[1]&&seeds[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                        soil[i]=s1[0]+seeds[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        soil[i]=seeds[i];
    }
}
//getline(cin,s);
vector<vector<ll>> lst1(18);
for(ll i=0;i<18;i++)
    {
        cin>>a>>b>>c;
        lst1[i].pub(a);lst1[i].pub(b);lst1[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<18;j++)
    {
       vector<ll> s1=lst1[j];
        if(soil[i]>=s1[1]&&soil[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                        fert[i]=s1[0]+soil[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        fert[i]=soil[i];
    }
}
//getline(cin,s);
vector<vector<ll>> lst2(12);
for(ll i=0;i<12;i++)
    {
        cin>>a>>b>>c;
        lst2[i].pub(a);lst2[i].pub(b);lst2[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<12;j++)
    {
        vector<ll> s1=lst2[j];
        if(fert[i]>=s1[1]&&fert[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                       water[i]=s1[0]+fert[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        water[i]=fert[i];
    }
}
//getline(cin,s);
vector<vector<ll>> lst3(49);
for(ll i=0;i<49;i++)
    {
        cin>>a>>b>>c;
        lst3[i].pub(a);lst3[i].pub(b);lst3[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<49;j++)
    {
        vector<ll> s1=lst3[j];
        if(water[i]>=s1[1]&&water[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                        light[i]=s1[0]+water[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        light[i]=water[i];
    }
}
//getline(cin,s);
vector<vector<ll>> lst20(30);
for(ll i=0;i<30;i++)
    {
        cin>>a>>b>>c;
        lst20[i].pub(a);lst20[i].pub(b);lst20[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<30;j++)
    {
        vector<ll> s1=lst20[j];
        if(light[i]>=s1[1]&&light[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                        temp[i]=s1[0]+light[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        temp[i]=light[i];
    }
}
//getline(cin,s);
vector<vector<ll>> lst5(23);
for(ll i=0;i<23;i++)
    {
        cin>>a>>b>>c;
        lst5[i].pub(a);lst5[i].pub(b);lst5[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<23;j++)
    {
        vector<ll> s1=lst5[j];
        if(temp[i]>=s1[1]&&temp[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                        humid[i]=s1[0]+temp[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        humid[i]=temp[i];
    }
}
//getline(cin,s);
vector<vector<ll>> lst6(43);
for(ll i=0;i<43;i++)
    {
        cin>>a>>b>>c;
        lst6[i].pub(a);lst6[i].pub(b);lst6[i].pub(c);
    }
for(ll i=0;i<n;i++)
{
    flag = 1;
    for(ll j=0;j<43;j++)
    {
        vector<ll> s1=lst6[j];
        if(humid[i]>=s1[1]&&humid[i]<s1[1]+s1[2]) //for(ll k=s1[1];k<s1[1]+s1[2];k++)
                    {
                        location[i]=s1[0]+humid[i]-s1[1];
                        flag=0;
                        break;
                    }
        if(flag==0)
            break;
    if(flag==1)
        location[i]=humid[i];
    }
}
sort(location.begin(),location.end());
cout<<location[0]<<endl;
}

