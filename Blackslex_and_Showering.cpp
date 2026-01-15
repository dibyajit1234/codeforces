#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,sum=0;
    cin>>n;
    vector<long long> a(n);
    for(long long &x:a)cin>>x;
    for(int i=1;i<n;i++) sum+=abs(a[i]-a[i-1]);
    long long ans = min(sum-abs(a[0]-a[1]),sum-abs(a[n-2]-a[n-1]));
    for(int i=1;i<n-1;i++){
      ans = min(ans,sum- abs(a[i+1]-a[i])-abs(a[i]-a[i-1])+abs(a[i+1]-a[i-1]));
    }
    cout<<ans<<endl;
  }
  return 0;
}
