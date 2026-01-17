#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,c0=0,c1=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      if(x==0)c0++;
      else if(x==1)c1++;
    }
    if(c0==0)cout<<"No\n";
    else if(c0>=2 && c1==0)cout<<"No\n";
    else cout<<"Yes\n";
  }
  return 0;
}
