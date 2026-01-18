#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n),nunu(n);
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      a[i]=x;
      nunu[i]=x;
    }
    while(m--){
      ll b,c;
      cin>>b>>c;
      a[--b]+=c;
      if(a[b]>h){
        for(ll i=0;i<n;i++) a[i]=nunu[i];
      }
    }
    for(ll x:a)cout<<x<<' ';
    cout<<endl;
  }
  return 0;
}
