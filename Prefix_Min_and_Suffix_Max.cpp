#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n),pref(n),sufx(n);
    for(int &x:a)cin>>x;
    int mx=a[n-1],mn=a[0];
    for(int i=0;i<n;i++){
      mn=min(mn,a[i]);
      pref[i]=mn;
    }
    for(int i=n-1;i>=0;i--){
      mx=max(mx,a[i]);
      sufx[i]=mx;
    }
    for(int i=0;i<n;i++){
      if(pref[i]<a[i] && sufx[i]>a[i])cout<<0;
      else cout<<1;
    }
    cout<<'\n';

    
  }
  return 0;
}
