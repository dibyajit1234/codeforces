#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ans=INT_MAX;
    cin>>n;
    while(n>0){
      ans = min(ans,n%10);
      n/=10;
    }
    cout<<ans<<'\n';
  }
}
