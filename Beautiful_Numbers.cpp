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
    int sum =0,n=s.size();
    vector<int> count;
    for(char c:s){
      sum+=c-'0';
    }
    if(sum<10){
      cout<<0<<'\n';
      continue;
    }
      int ans =0,need = sum-9;
      for(int i=0;i<n;i++){
        int d = s[i]-'0';
        if(i==0){
        count.push_back(d-1);
        }else count.push_back(d);
    }

      sort(count.rbegin(),count.rend());
    for(int x:count){
      if(need<=0)break;
      need-=x;
      ans++;
    }
    cout<<ans<<'\n';
    
  }
  return 0;
}
