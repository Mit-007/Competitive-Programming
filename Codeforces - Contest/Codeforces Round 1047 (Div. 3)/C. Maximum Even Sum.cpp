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


ll m_j_007(){
	ll a,b;
	cin>>a>>b;
	if(a%2==0 && b%2==0){
		return (a*(b/2))+2;
	}
	else if(a%2!=0 && b%2!=0){
		return (a*b)+1;
	}
	else if(a%2!=0 && b%2==0){
		ll x=(a*(b/2));
		return (x%2==0) ? x+2 : -1;
	}
	else{
		return -1;
	}
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
