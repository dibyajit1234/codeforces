#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    long long k,m;
    cin>>k>>m;
    long long ans = ceil(sqrt((long double)k/m));
    cout<<ans<<'\n';
  }
  return 0;
}
