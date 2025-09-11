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
	for(int i=0;i<n;i++){
		int tp;
		cin>>tp;
		cout<<(n-tp+1)<<" ";
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
