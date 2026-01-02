#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,neg=0,res=0;
    cin>>n;
    for(int i=0;i<n;++i){
      int x;
      cin>>x;
      neg+=x==-1;
    }
    if(neg%2){
      neg-=1;
      ++res;
    }
    while(neg>n - neg){
      neg-=2;
      res+=2;
    }
    cout<<res<<endl;
  }
  return 0;
}
