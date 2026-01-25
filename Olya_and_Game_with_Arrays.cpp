#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    ll min1=LLONG_MAX,min2 = LLONG_MAX,min2sum=0;
    while(n--){
      int m;
      cin>>m;
      ll lm1=LLONG_MAX,lm2=LLONG_MAX;
      for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x<lm1){
          lm2=lm1;
          lm1=x;
        }
        else if(x>lm1 && x<lm2) lm2=x;
      }
      min2sum+=lm2;
      min1 = min(min1,lm1);
      min2 = min(min2,lm2);
    }
    cout<<min1+min2sum - min2<<'\n';
  }
  return 0;
}
