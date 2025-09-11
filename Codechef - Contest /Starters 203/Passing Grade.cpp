#include <bits/stdc++.h>
using namespace std;

int main() {
	// m_j_007
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ans=0;
    std::vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(i!=0 && a[0] <= a[i]) ans++;
    }
    cout<<ans+1<<endl;
  }
}
