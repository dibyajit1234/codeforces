#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll fact(ll n){
  ll temp =1;
  for(int i=1;i<=n;i++)temp*=i;
  return temp;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    ll n,k,q,ans=0,count=0;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      if(x<=q)count++;
      else{
        if(count>=k){
          ll len = count - k + 1;
          ans += len * (len + 1) / 2;
        }
        count=0;
      }
    }
    
    if(count >=k){
      ll len = count - k + 1;
      ans += len * (len + 1) / 2;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
