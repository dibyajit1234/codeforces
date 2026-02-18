#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    cout<<(a^b)<<'\n';
  }
  return 0;
}
