#include <bits/stdc++.h>
using namespace std;

#define NL endl
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vstr vector<string>
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define si set<int>
#define sll set<ll>
const int mod=1e9+7;

ll m_j_007(){
	int n,m;
	cin>>n>>m;
	vi a(n);
	ll ans=0;
	priority_queue<int,vi,greater<int>> pq;
	int sz=min(n,m);
	for(int i=0;i<n;i++){
		int tp;
		cin>>tp;
		pq.push(tp);
		if(pq.size() > sz) pq.pop();
	}
	while(!pq.empty()){
		ans+=pq.top()*(m-pq.size()+1);
		pq.pop();
    }
	return ans;
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
