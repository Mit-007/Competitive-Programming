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
#define vpii vector<pair<int,int>>
#define pii pair<int,int>
#define si set<int>
#define sll set<ll>
const int mod=1e9+7;

// solution 

void m_j_007(){
	int n,q;
	cin>>n>>q;
	vi a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(q--){
		int k;
		cin>>k;
		for(int i=0;i<n;i++){
			if(a[i]%(1<<(k)) == 0){
				a[i] += (1<<(k-1));
			}
		}
	}
	for(auto i:a) cout<<i<<" ";
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
