#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int c0=0,c1=0;
    string s;
    cin>>s;
    for(char c:s){
      if(c=='0')c0++;
      else c1++;
    }
    for(char c:s){
      if(c=='0'){
        if(c1)c1--;
        else break;
      }
      else{
        if(c0)c0--;
        else break;
      }
    }
    cout<<c0+c1<<'\n';
  }
  return 0;
}
