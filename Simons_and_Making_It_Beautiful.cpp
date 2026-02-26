#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,i=0;
    cin>>n;
    int boro = -1;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(;i<n;i++){
      //boro = max(boro,a[i-1]);
      if(a[i]==n){boro = i;break;} 
    }
    if(boro!=0)swap(a[0],a[boro]);
    for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
  }
  return 0;
}
