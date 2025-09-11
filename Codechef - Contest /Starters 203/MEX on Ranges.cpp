#include <bits/stdc++.h>
using namespace std;

int main() {
	// m_j_007
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    string s;
    cin>>s;
    int val=1;
    a[0]=0;
    for(int i=2;i<=n;i++){
      if(s[i]=='1'){
        a[i-1]=val;
        val=i;
      }
      else{
        a[i-1]=i;
      }
    }
    for(auto x : a) cout<<x<<" ";
    cout<<endl;
  }
}
