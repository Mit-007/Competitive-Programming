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

ll m_j_007(){
	ll n;
	cin>>n;
	vi odd;
	ll evensum=0;
	ll oddsum=0;
	for(ll i=0;i<n;i++){
		ll tp;
		cin>>tp;
		if(tp%2==0) evensum+=tp;
		else odd.push_back(tp);
	}
	if(odd.size()==0) return 0;
	sort(odd.begin(),odd.end(),greater<int>());
	ll len=(odd.size()%2==0)? (odd.size()/2)-1 : odd.size()/2 ;
	for(int i=0;i<=len;i++){
		oddsum+=odd[i];
	}
	return (evensum+oddsum);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cout<<m_j_007()<<endl;
	}
	return 0;
}
