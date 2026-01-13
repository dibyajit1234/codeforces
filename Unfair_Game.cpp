#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,ans=0,temp=1;
    cin>>n>>k;
    k--;
    while(k--){
      temp*=2;
    }
    cout<<(n-temp >0? n-temp : 0)<<endl;
  }
  return 0;
}
