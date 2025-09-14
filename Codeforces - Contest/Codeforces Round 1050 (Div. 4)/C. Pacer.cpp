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
	int n,m;
	cin>>n>>m;
	ll ans=0;
	int min=0;
	int pos=0;
	while(n--){
		int a,b;
		cin>>a>>b;
		int dif=a-min;
		if(dif%2==0){
			if(pos == b) ans+=dif;
			else ans+=dif-1;
		}
		else{
			if(pos != b) ans+=dif;
			else ans+=dif-1;
		}
		pos=b;
		min=a;
	}
	if(m!=min){
		int dif=m-min;
		ans+=dif;
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
