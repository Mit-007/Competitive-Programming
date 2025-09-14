#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <climits> 
using namespace std;

#define NL endl
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vstr vector<string>
#define vvstr vector<vector<string>>
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vpii vector<pair<int,int>>
#define pii pair<int,int>
#define si set<int>
#define sll set<ll>
const int mod=1e9+7;

// solution 

void m_j_007(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	ll ans=0;
	for(int i=0;i<n;i++){
		int tp;
		cin>>tp;
		if(tp <= y) ans++;
	}
	for(int i=0;i<m;i++){
		int tp;
		cin>>tp;
		if(tp <= x) ans++;
	}
	cout<<ans<<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		m_j_007();
	}

	return 0;
}
