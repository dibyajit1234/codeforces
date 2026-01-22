#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,ans=6,cnt=0;
    cin>>n>>k;
    while(n--){
      int x;
      cin>>x;
      if(x%2==0)cnt++;
      ans = min(ans,(k-(x%k==0?k:x%k)));
    }
    if(k==4){
      cout<<min(ans,max(0,2-cnt))<<'\n';

    }
    else cout<<ans<<'\n';
  }
  return 0;
}
