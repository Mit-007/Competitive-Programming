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
//approach : Binary Search

bool help(ll h,ll w,vll &a,ll n){
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=max(h-a[i],(ll)0);
	}
	if(sum <= w) return true;
	return false;
}

void m_j_007(){
	ll n,w;
	cin>>n>>w;
	vll a(n);
	for(auto &x:a) cin>>x;
	sort(a.begin(),a.end());
	ll ans;
	ll low=1;
	ll high=a[n-1]+(w/n);
	while(low <= high){
		ll mid=low + (high-low)/2;
		if(help(mid,w,a,n)) {
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
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
