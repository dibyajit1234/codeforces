#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,count=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(char c:s){
      if(c=='1')count++;
    }
    cout<<(count<=k || n<2*k ? "Alice":"Bob")<<'\n';
  }
  return 0;
}
