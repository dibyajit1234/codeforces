#include<bits/stdc++.h>
using namespace std;
int solve(string &s,string& e);
const string subsq[] = {"00","25","75","50"};
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int ans =100;
    for(auto e:subsq){
      ans = min(ans,solve(s,e));
    }
    cout<<ans<<endl;
  }
  return 0;
}
int solve(string &s,string &e){
  int ans = 0,length = s.length()-1;
  while(length>=0 && s[length]!=e[1]){
    length--;
    ans++;
  }
  if(length<0)return 100;
  length--;
  while(length>=0 && s[length]!=e[0]){
    length--;
    ans++;
  }
  return length<0 ? 100:ans;
  
}
