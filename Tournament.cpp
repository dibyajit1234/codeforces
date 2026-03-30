#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,j,k,count=0,mx=-1;
    cin>>n>>j>>k;
    vector<int> a(n);
    for(int &i:a){
      cin>>i;
      mx=max(mx,i);
    } 
    cout<<(k>1||a[j-1]==mx?"Yes":"No")<<'\n';
  }
  return 0;
}
