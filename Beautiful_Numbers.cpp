#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    vector<int> count(9,0);
    for(char c:s)count[c-'0']++;
    int m =0;
    for(int x:count){m = max(m,x);}
    cout<<(s.size()-m)<<'\n';
  }
  return 0;
}
