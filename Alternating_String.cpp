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
    int point=-1;
    for(int i=0;i<s.length()-1;i++){
      if(s[i]==s[i+1]){
        point=i+1;
        break;
      }
    }
    if(point==-1){
      cout<<"Yes"<<'\n';
      continue;
    }
    int count=0;
    for(int i=point;i<s.length()-1;i++){
      if(s[i]==s[i+1])count++;
    }
    cout<<(count>1?"No":"Yes")<<'\n';
  }
  return 0;
}
