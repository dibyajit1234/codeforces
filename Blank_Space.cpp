#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,res=0,temp=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      if(x==0)temp++;
      else temp =0;
      res=max(res,temp);
    }
    cout<<res<<endl;
  }
  return 0;
}
