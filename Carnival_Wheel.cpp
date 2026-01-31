#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int l,a,b,ans=0;
    cin>>l>>a>>b;
    int n=l;
    while(n--){
      ans=max(ans,(a+n*b)%l);
    }
    cout<<ans<<'\n';
  }
  return 0;
}
