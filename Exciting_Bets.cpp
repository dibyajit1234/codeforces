#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    if(a==b)cout<<0<<' '<<0<<endl;
    else{
      cout<<abs(a-b)<<' '<<min(a%abs(a-b),abs(a-b)-a%abs(a-b))<<endl;
    }
  }
  return 0;
}
