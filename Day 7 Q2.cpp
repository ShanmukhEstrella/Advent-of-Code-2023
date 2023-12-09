// Shanmukh
#include <bits/stdc++.h>
#define pub push_back
#define ll long long int
#define endl '\n'
#define mod 1000000007
#define fastio()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
using namespace std;
vector<char> v;
bool wish(pair<ll, pair<string, ll>> a, pair<ll, pair<string, ll>> b)
{
	string s1 = a.second.first;
	string s2 = b.second.first;
	ll req = 0;
	for (ll i = 0; i < 5; i++)
	{
		if (find(v.begin(), v.end(), s1[i]) - v.begin() < find(v.begin(), v.end(), s2[i]) - v.begin())
		{
			return false;
		}
		else if (find(v.begin(), v.end(), s1[i]) - v.begin() > find(v.begin(), v.end(), s2[i]) - v.begin())
		{
			return true;
		}
	}
	if (req != 5)
		return true;
	else
		return false;
}
bool my(pair<ll, pair<string, ll>> a, pair<ll, pair<string, ll>> b)
{
	if (a.first < b.first)
		return true;
	else if (a.first == b.first)
	{
		if (wish(a, b))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
		return false;
}
void solve()
{
	fastio()
			ll n;
	string s;
	vector<pair<ll, pair<string, ll>>> mp;
	for (ll i = 0; i < 1000; i++)
	{
		cin >> s;
		cin >> n;
		set<char> s1;
		for (ll j = 0; j < 5; j++)
		{
			s1.insert(s[j]);
		}
		// cout<<s<<endl;
		if (s1.size() == 1)
		{
			// cout<<s<<endl;
			mp.pub({7, {s, n}});
		}
		else if (s1.size() == 2)
		{
			// cout<<s<<endl;
			if (find(s.begin(), s.end(), 'J') != s.end())
				mp.pub({7, {s, n}});
			else
			{
				for (auto j : s1)
				{
					if ((count(s.begin(), s.end(), j) == 1) || (count(s.begin(), s.end(), j) == 4))
					{
						mp.pub({6, {s, n}});
						break;
					}
					else
					{
						mp.pub({5, {s, n}});
						break;
					}
				}
			}
		}
		else if (s1.size() == 3)
		{
			// cout<<s<<endl;
			if (find(s.begin(), s.end(), 'J') != s.end())
			{
				if (count(s.begin(), s.end(), 'J') == 3)
				{
					mp.pub({6, {s, n}});
				}
				else if (count(s.begin(), s.end(), 'J') == 2)
				{
					mp.pub({6, {s, n}});
				}
				else if (count(s.begin(), s.end(), 'J') == 1)
				{
					for (auto prah : s1)
					{
						if (prah != 'J')
						{
							if (count(s.begin(), s.end(), prah) == 3 || count(s.begin(), s.end(), prah) == 1)
							{
								mp.pub({6, {s, n}});
								break;
							}
							else
							{
								mp.pub({5, {s, n}});
								break;
							}
						}
					}
				}
			}
			else
			{
				ll flag = 1;
				for (auto j : s1)
				{
					if (count(s.begin(), s.end(), j) == 3)
					{
						mp.pub({4, {s, n}});
						flag = 0;
						break;
					}
				}
				if (flag == 1)
					mp.pub({3, {s, n}});
			}
		}
		else if (s1.size() == 4)
		{
			// cout<<s<<endl;
			if (find(s.begin(), s.end(), 'J') != s.end())
			{
				mp.pub({4, {s, n}});
			}
			else
				mp.pub({2, {s, n}});
		}
		else if (s1.size() == 5)
		{
			// cout<<s<<endl;
			if (find(s.begin(), s.end(), 'J') != s.end())
			{
				mp.pub({2, {s, n}});
			}
			else
				mp.pub({1, {s, n}});
		}
	}
	// for(auto j : mp)
	// {
	// 	cout<<j.first<<" "<<j.second.first<<" "<<j.second.second<<endl;
	// }
	sort(mp.begin(), mp.end(), my);
	// sort(mp.begin(),mp.end(),my2);
	ll req = 0;
	ll p = 1;
	for (auto i : mp)
	{
		req = req + ((i.second.second) * p);
		p++;
		// cout<<req<<endl;
	}
	for (auto j : mp)
	{
		cout << j.first << " " << j.second.first << " " << j.second.second << endl;
	}
	cout << req << endl;
}
int main()
{
	vector<char> v1;
	v1.pub('A');
	v1.pub('K');
	v1.pub('Q');
	v1.pub('T');
	v1.pub('9');
	v1.pub('8');
	v1.pub('7');
	v1.pub('6');
	v1.pub('5');
	v1.pub('4');
	v1.pub('3');
	v1.pub('2');
	v1.pub('J');
	v = v1;
	solve();
}
