#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ans=0,temp=0;
    cin>>n;
    while(n--){
      int x;
      cin>>x;
      if(x<temp)ans++;
      temp=max(temp,x);
    }
    cout<<ans<<'\n';
  }
  return 0;
}
