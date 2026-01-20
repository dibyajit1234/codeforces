#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll &x:a)cin>>x;
    if(n==1)cout<<a[0]<<'\n';
    else cout<<(a[0]^a[1])<<'\n';
  }
  return 0;
}
