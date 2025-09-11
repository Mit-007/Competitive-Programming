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

void m_j_007(){
	int a,b;
	cin>>a>>b;
	if(a==b) cout<< 0 <<endl;
	else if(a>b && a%b==0) cout<<1 <<endl;
	else if(b>a && b%a==0) cout<<1<<endl;
	else cout<<2<<endl; 
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
