#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans;
    for(int i=0;i<n;i++)if(s[i]=='0')ans.push_back(i+1);
    cout<<ans.size()<<'\n';
    for(int x:ans)cout<<x<<' ';
    cout<<'\n';
  }
  return 0;
}
