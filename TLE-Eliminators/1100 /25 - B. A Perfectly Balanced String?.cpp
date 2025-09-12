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

bool m_j_007(){
	string s;
	cin>>s;
	vi a(26);
	int n=s.size();
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[s[i]-'a'] == 0) cnt++;
		a[s[i]-'a']++;
	}
	int i=0,j=i+cnt;
	while(i<n && j<n){
		if(s[i] != s[j]) return false;
		i++;
		j++;
	}
	return true;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		if (m_j_007()){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
