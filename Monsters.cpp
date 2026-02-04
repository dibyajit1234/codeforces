#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,int>> v(n);
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      if(x%k==0)x=k;
      else x=x%k;
      pair<ll,int> p ;
      p.first=-x;
      p.second = i+1;
      v[i] = p;
    }
    sort(v.begin(),v.end());
    //reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
      pair<ll,int> p = v[i];
      cout<<p.second<<' ';
    }
    cout<<'\n';
  }
  return 0;
}
