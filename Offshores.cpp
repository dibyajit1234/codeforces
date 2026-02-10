#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,x,y,sa=0,ans=0;
    cin>>n>>x>>y;
    vector<ll> a(n);
    for(ll &z:a) cin>>z;
    for(ll z:a) sa+=z/x *y;
    for(ll z:a)ans = max(ans,(sa-z/x *y)+z);
    cout<<ans<<'\n';

  }
  return 0;
}
