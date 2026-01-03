#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,sum=0,res=-1;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      sum^=x;
    };
    if(n%2!=0){
      res = sum;
    }else{
      if(sum==0) res =0;
    }
    cout<<res<<endl;
    
  }
  return 0;
}
