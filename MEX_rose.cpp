#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),count(n,0);
    int m=0,ans =0;
    for(int &x:a){
      cin>>x;
      if(x==k)m++;
      if(x<k)count[x]++;
    }
    for(int i=0;i<k;i++){
      if(!count[i]) ans++;
    }
    cout<<max(ans,m)<<'\n';
  }
  return 0;
}
