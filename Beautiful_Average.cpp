#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,ans = 0;
    cin>>n;
    while(n--){
      int x;
      cin>>x;
      ans= max(ans,x);
    }
    cout<<ans<<'\n';
  }
  return 0;
}
