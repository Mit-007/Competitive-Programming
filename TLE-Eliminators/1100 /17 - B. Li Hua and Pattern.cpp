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

bool m_j_007(){
	int n,k;
	cin>>n>>k;
	vvi a(n,vi(n));
	for(auto & i: a){
		for(auto &j:i){
			cin>>j;
		}
	}
	if(n==1) return true;
	for(int i=0;i<=n/2;i++){
		if(n%2==0 && i==n/2) break;
		if(k<0) return false;
		for(int j=0;j<n;j++){
			if(k<0) return false;
			if(i==n-i-1 && j==n-1-j) break;
			if(a[i][j] != a[n-1-i][n-1-j]) k--;
		}
	}
	if(k<0 || (n%2==0 && k%2!=0)) return false;
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
