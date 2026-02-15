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
    bool ans = true;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int i=1;i<=n;i++){
      if(a[i-1]!=i && a[n-i]!=i){
        ans = false;
        break;
      }
    }
    cout<<(ans?"Yes":"No")<<'\n';
  }
  return 0;
}
