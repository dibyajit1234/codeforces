#include<bits/stdc++.h>
typedef long long ll;
ll ceil(ll a, ll b){
  return (a+b-1)/b;
}
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,x,Max=0;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll &i:a){
      cin>>i;
      Max+=ceil(i,x);
    }
    ll temp=0;
    for(int i=0;i<n;i++)temp+=a[i];
    cout<<ceil(temp,x)<<' '<<Max<<endl;
  }
  return 0;
}
