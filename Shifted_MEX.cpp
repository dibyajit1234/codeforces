#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,ans=1,count=1;
    cin>>n;
    vector<ll>a(n);
    for(ll &x:a){
      cin>>x;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
      if(a[i]+1==a[i+1] )count++;
      else if (a[i]==a[i+1]) continue;
      else count =1;
      ans =max(count,ans);
    }
    
    cout<<ans<<endl;
  }
  return 0;
}
