#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans=0;
  cin>>n;
  string s;
  cin>>s;
  for(char x:s){
    if(x=='A')ans++;
    else ans--;
  }
  if(ans==0)cout<<"Friendship"<<'\n';
  else cout<<(ans>0?"Anton":"Danik")<<'\n';
  return 0;
}
