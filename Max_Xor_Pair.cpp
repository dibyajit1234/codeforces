#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x,res = INT_MIN;
    cin>>n>>x;

    for(int i=1;i<n;i++){
      if(i==x)continue;
      for(int j=1;j<n;j++){
        if(j==x)continue;
        res = max(res,i^j);
      }
    }
    cout<<res<<endl;
  }
  return 0;
}
