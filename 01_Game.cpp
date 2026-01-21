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
      if(c-'0' ==0)c0++;
      else c1++;
    }
    int ans = min(c0,c1);
    cout<<(ans%2==0?"NET\n":"DA\n");
  }
  return 0;
}
