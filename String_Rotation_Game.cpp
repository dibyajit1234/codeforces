#include<bits/stdc++.h>
using namespace std;
int score(string s){
  int ans = 0;
  for(int i=0;i<s.size()-1;i++)if(s[i]!=s[i+1])ans++;
  return ++ans;
}
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
    bool flag = true;
    int ans = score(s);
    if(s[0]==s[n-1])flag = true;
    else for(int i=0;i<n-1;i++)if(s[i]==s[i+1]){flag=false;break;}
    cout<<(flag?ans:ans+1)<<'\n';
  }
  return 0;
}
