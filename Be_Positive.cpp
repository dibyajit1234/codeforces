#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,c0=0,count=0;
    cin>>n;
    while(n--){
      int x;
      cin>>x;
      if(x==0)c0++;
      else if(x==-1)count++;
    }
    cout<<(c0+(count>1?(count%2)*2:count*2))<<'\n';
  }
  return 0;
}
