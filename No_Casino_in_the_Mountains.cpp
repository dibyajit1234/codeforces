#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,k,ans=0,count=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int i=0;i<n;i++){
      if(a[i]==0){
        count++;
        if(count==k){
          ans++;
          count=0;
          i++;
        }
      }else count=0;
    }
    cout<<ans<<'\n';
  }
  return 0;
}
