#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s,t;
    cin>>s>>t;
    vector<int> temp(26,0);
    for(char &c:t)temp[c-'A']++;

    string res;
    for(int i=s.length()-1;i>=0;i--){
      char c = s[i];
      if(temp[c-'A']>0){
        res+=c;
        temp[c-'A']--;
      }
    }
    reverse(res.begin(),res.end());
    if(res==t)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
