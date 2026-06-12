/*#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b,x,ans=0;
    cin>>a>>b>>x;
    bool ok = false;
    while(!ok){
      if(a==b){
        ok=true;
      }
      else if(abs(a-b)>1){
        if(a>b)a=a/x;
        else b=b/x;
        ans++;
      }
      else {
        if(a>b)b++;
        else a++;
        ans++;
      }
    }
    cout<<ans<<'\n';
  }
}*/ 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void xxx(ll cur, ll cost, ll x,
         unordered_map<ll,ll>& dist) {
    auto it = dist.find(cur);
    if (it != dist.end() && it->second <= cost) return;
    dist[cur] = cost;
    if (cur == 0) return;
    ll q = cur / x;
    ll r = cur % x;
    xxx(q, cost + 1, x, dist);
    if (r) {
        xxx(q + 1, cost + (x - r) + 1, x, dist);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, x;
        cin >> a >> b >> x;
        unordered_map<ll,ll> distA, distB;
        xxx(a, 0, x, distA);
        xxx(b, 0, x, distB);
        ll ans = llabs(a - b);
        for (auto &[u, ca] : distA) {
            for (auto &[v, cb] : distB) {
                ans = min(ans, ca + cb + llabs(u - v));
            }
        }
        cout << ans << '\n';
    }
}
