#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i+=2){
      ans = max(ans,abs(a[i]-a[i+1]));
    }
    cout<<ans<<'\n';
  }
  return 0;
}
