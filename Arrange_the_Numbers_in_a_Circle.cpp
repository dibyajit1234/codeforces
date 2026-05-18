#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<ll> c(n) ;
    for(ll &x:c)cin>>x;
    ll ans =0;
    for(int i=0;i<n;i++)ans = max(ans,c[i]);

    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        ans = max(ans,2LL * min(c[i],c[j]));
      }
    }
    if(ans<3)ans=0;
    cout<<ans<<'\n';
  }
  return 0;
}
