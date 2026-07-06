#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ans=0;
    cin>>n;
    while(n--){
      int x;
      cin>>x;
      if(x>=2)ans+=x;
    }
    cout<< (ans>=3?"Yes":"No")<<'\n';
  }
  return 0;
}
