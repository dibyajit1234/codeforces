#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count=0;
  for(char c:s){
    if(islower(c))count++;
    else count--;
  }
  if(count>=0){
    for(char &c:s)c=tolower(c);
  }
  else for(char &c:s)c=toupper(c);
  cout<<s<<'\n';
  return 0;
}
