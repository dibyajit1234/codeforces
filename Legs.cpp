#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,ans =0;
    cin>>n;
    ans += (n>2?(n/4 + (n%4)/2):1);
    cout<<ans<<'\n';
  }
  return 0;
}
