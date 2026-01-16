#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(char &c:s){
    if(c>'4') c='9'-c +'0';
  }
  if(s.front()=='0') s.front()='9';
  cout<<s<<endl ;
  
  return 0; 
}
