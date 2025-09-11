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
        long long k,x,kk; 
        cin>>k>>x; kk=1ll<<k;
        if (!x||x==kk*2) {cout<<"-1\n"; return ;}
        long long y=kk*2-x;
        vector<int> ans;
        ans.clear();
        while(x!=kk){
            if (x>y) ans.push_back(2),x-=y,y*=2;
            else ans.push_back(1),y-=x,x*=2;
        }
        cout<<ans.size()<<"\n";
        while(!ans.empty()) cout<<ans.back()<<' ',ans.pop_back();
        cout<<"\n";
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
