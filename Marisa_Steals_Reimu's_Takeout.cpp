#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,ans =0;
    cin>>n;
    int w[n];
    for(int &x:w)cin>>x;
    int temp =0;
    for(int i=0;i<n;i++){
       temp+=w[i];
      if(temp%3==0){
        ans++;
        temp=0;
      }
    }
    cout<<ans<<'\n';
  }
  return 0;
}
