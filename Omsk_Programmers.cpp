#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b,x,ans=0;
    cin>>a>>b>>x;
    bool ok = false;
    while(!ok){
      if(a==b){
        ok=true;
      }
      else if(abs(a-b)>1){
        if(a>b)a=a/x;
        else b=b/x;
        ans++;
      }
      else {
        if(a>b)b++;
        else a++;
        ans++;
      }
    }
    cout<<ans<<'\n';
  }
}
