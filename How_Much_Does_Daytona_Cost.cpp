#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    bool flag = false;
    cin>>n>>k;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int i=0;i<n;i++){
      if(a[i]==k) {
        flag = true;
        break;
      }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
