#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll d=11;
    vector<ll> ans;
    while(n>=d){
      if(n%d==0){
        ans.push_back(n/d);
      }
      d=(d-1)*10 + 1;
    }
    cout<<ans.size()<<'\n';
    for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<(i==0?'\n':' ');
  }
  return 0;
}
