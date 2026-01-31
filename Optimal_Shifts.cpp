#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,count=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    s+=s;
    n *=2;
    for(int i=0;i<n-1;i++){
      if(s[i]=='1')count=0;
      else count++;
      ans = max(ans,count);
    } 
    cout<<ans<<'\n';
  }
  return 0;
}
