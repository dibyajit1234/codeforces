#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n),b(n),c(n);
    for(ll &x:a)cin>>x;
    for(ll &x:b)cin>>x;
    ll Max =a[n-1];
    for(int i=n-1;i>=0;i--){
      ll x = max(b[i],(i==n-1?-1:a[i+1]));
      Max= max(Max,x);
      c[i]= max(Max,a[i]);
    }
    vector<ll> ans(n);
    ans[0]=c[0];
    for(int i=1;i<n;i++){
      ans[i]=ans[i-1] +c[i];
    }
    while(q--){
      int l,r;
      cin>>l>>r;
      l--,r--;
      ll sum = ans[r]-(l>0?ans[l-1]:0);
      cout<<sum<<' ';
    }
     
    cout<<'\n';
  }
  return 0;
}

