#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> a(n+1),b(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++) a[i]=i;
    a[r]=l-1;
    for(int i=1;i<=n;i++)b[i]=a[i]^a[i-1];
    for(int i=1;i<=n;i++)cout<<b[i]<<(i==n?'\n':' ');

  }
  return 0;
}
