#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,ans=0,tot=0,singles=0,extra=0;
    cin>>n;
    vector<ll> c(n) ;
    for(ll &x:c){
      cin>>x;
      tot+=x;
      if(x>=2){
        ans+=x;
        extra = (x-2)/2;
      }
      else singles++;
    }
    ans+= min(singles,extra);
    	ll other = min(tot, c[n-1] + c[n-1] / 2);
	ans = max(ans, other);
    if(ans<3)ans=0;
    cout<<ans<<'\n';

  }
  return 0;
}
