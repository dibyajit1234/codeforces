#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int i=0;i<n-1;i++){
      if(a[i]==7-a[i+1] || a[i]==a[i+1]){
        count++;
        i++;
      }
    }
    cout<<count<<'\n';
  }
  return 0;
}
