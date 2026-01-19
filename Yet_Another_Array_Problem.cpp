#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    ll n,Min=INT_MAX,ans =-1;
    cin>>n;
    vector<ll>a(n);
    for(ll &x:a){
      cin>>x;
    }
    for (ll x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53}) {
            int ok = 0;
            for (ll i : a) {
                if (i % x) {
                    ok = 1;
                    break;
                }
            }
            if (ok) {
                cout << x << '\n';
                break;
            }
        } 
  

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();    
  }
}
