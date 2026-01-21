#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>k>>n;
    vector<ll>a(n*k +1);
    for(int i=1;i<=n*k;i++)cin>>a[i];
    ll dif = k-((k+1)/2 -1);
    ll z = n*k+1,ans=0;
    
    while(n--){
      z-=dif;
      if(z<=0)break;
      ans+=a[z];
    }
    cout<<ans<<'\n';
  }
  return 0;
}
