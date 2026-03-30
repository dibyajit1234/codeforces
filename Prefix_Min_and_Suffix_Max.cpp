#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,mx=0,mn=0;
    cin>>n;
    vector<int> a(n),ans(n);
    for(int &x:a)cin>>x;
    for(int i=0;i<n;i++){
      mx=(a[i]>a[mx]?i:mx);
      mn=(a[i]<a[mn]?i:mn);
    }
    int flag1=(mn==0?-1:mn-1),flag2=(mx==n-1?-1:mx+1);
    for(int i=0;i<n;i++){
      if(i==mx||i==mn||i==flag1||i==flag2)ans[i]=1;
      else ans[i]=0;
    }
    for(int i:ans)cout<<i;
    cout<<'\n';
  }
  return 0;
}
