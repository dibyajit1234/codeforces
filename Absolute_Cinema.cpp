#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll> a(n+1),ans(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<n;i++){
      ans[i]=(a[i-1]+a[i+1]-2*a[i])/2;
    }
    ll sum_n = 0;
    for(int i=2;i<n;i++)sum_n+=ans[i]*(i-1);
    ans[n]=(a[1]-sum_n)/(n-1);
    ll sum_1 =0;
    for(int i=2;i<n;i++) sum_1+=ans[i]*(n-i);
    ans[1]=(a[n]-sum_1)/(n-1);
    for(int i=1;i<=n;i++)cout<<ans[i]<<(i==n?'\n':' ');
  }
  return 0;
}
