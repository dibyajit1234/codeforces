#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,count=1,res=1;
    cin>>n>>k;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    sort(a.begin(),a.end());
    for(int i=1;i<n;++i){
      if(a[i]-a[i-1]>k)count=1;
      else ++count;
      res = max(res,count);
    }
    cout<<n-res<<endl;
  }
  return 0;
}
