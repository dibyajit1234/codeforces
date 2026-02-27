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
    vector<int> a(n);
    for(int &x:a)cin>>x;
    bool flag = true;
    for(int i=1;i<n;i++)if(a[i-1]>a[i]){flag = false;break;}
    cout<<(flag?n:1)<<'\n';
  }
  return 0;
}
