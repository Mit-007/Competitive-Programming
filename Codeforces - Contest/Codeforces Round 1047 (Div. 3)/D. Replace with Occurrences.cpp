#include <bits/stdc++.h>
#include <numeric>
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


void m_j_007(){
	int n;
	cin>>n;
	vi b(n);
	map<int , int > mp;
	for(int i=0;i<n;i++){
		cin>>b[i];
		mp[b[i]]++;
	}
	bool flag=true;
	int tp=0;
	map<int , int> cnt;
	for(auto &x:mp){
		if(!flag) break;
		cnt[x.first]=0;
		if(x.second % x.first != 0 ) flag=false;
		x.second=(x.second / x.first) + tp;
		tp=x.second;
	}
	if(!flag){ 
		cout<< -1 <<endl;
		return;
	}
	for(int i=0;i<n;i++){
		cout<<mp[b[i]]-(cnt[b[i]]/b[i])<<" ";
		cnt[b[i]]++;
	}
	cout<<endl;
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
