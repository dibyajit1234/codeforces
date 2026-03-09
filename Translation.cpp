#include<bits/stdc++.h>
using namespace std;
void nunuswap(char &a,char &b){
  char temp = a;
  a=b;
  b=temp;
}
int main(){
  string s,t;
  cin>>s>>t;
  int n = s.size();
  for(int i=0;i<n/2;i++){
    nunuswap(t[i],t[n-i-1]);
  }
  
  cout<<(s==t?"YES":"NO")<<'\n';
  return 0;
}
