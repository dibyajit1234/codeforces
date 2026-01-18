#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n),nunu(n,0);
    vector<int>last(n,-1);
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      a[i]=x;
    }
    int version =0;
    while(m--){
      ll b,c;
      cin>>b>>c;
      b--;
      if(last[b]!=version){
        nunu[b]=0;
        last[b]=version;
      }
      nunu[b]+=c;
      if(a[b]+nunu[b]>h){
        version++;
      }
      
    }
    for(int i=0;i<n;i++){
      if(last[i]==version) cout<<a[i]+nunu[i]<<' ';
      else cout<<a[i]<<' ';
    }
    cout<<endl;
      
  }
  return 0;
}
