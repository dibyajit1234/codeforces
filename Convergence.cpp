#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,m=0;
    cin>>n;
    vector<ll> a(n);
    for(ll &x:a){
      cin>>x;
      m = max(m,x);
    }
    vector<ll> temp(m+1);
    for(ll &x:a)temp[x]++;
    ll high=0;
    for(ll i=0;i<=m;i++){
      high = max(high,temp[i]);
    }
    cout<<(min((n-high),n/2))<<'\n';
  }
  return 0;
}
