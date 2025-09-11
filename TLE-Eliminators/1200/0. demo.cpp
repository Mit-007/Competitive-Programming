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
	int n;
	cin>>n;
	vpii a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second=i;
	}
	vi ans(n);
	sort(a.begin(),a.end());
	ll sum=0;
	int cnt=0;
	int j=0;
	for(int i=0;i<n;i++){
		if(j == i){
			sum+=a[j].first;
			cnt++;
			j++;
		}
		while(sum >= a[j].first && j <n){
			sum+=a[j].first;
			cnt++;
			j++;

		}
		ans[a[i].second]=cnt-1;
	}
	for(auto x:ans) cout<<x<<" ";
	cout<<endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		// if (solve()){
		// 	cout << "Yes" << endl;
		// }
		// else{
		// 	cout << "No" << endl;
		// }
		m_j_007();
		// cout<<solve()<<endl;
	}
	// cout<<solve()<<endl;
	// solve();

	return 0;
}
