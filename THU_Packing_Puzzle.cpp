#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    long long t,h,ans=0,u;
    cin>>t>>h>>u;
    while(t>0||h>0||u>0){
      if(t>0&&u>0){
        long long mul = min(t,u);
        t-=mul,u-=mul;
        ans+=4*mul;
      }
      else if(t>0&&h>0){
        long long mul = min(t,h);
        t-=mul,h-=mul;
        ans+=5*mul;
      }
      else if(t>0){
        ans+=5*t/2;
        ans+=3*(t%2);
        t=0;
      }
      else if(h>0){
        ans+=3*h;
        h=0;
      }
      else if(u>0){
        ans+=3*u;
        u=0;
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}
