#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n>0 && ((n&(n-1))==0))cout<<"No\n";
    else cout<<"Yes\n";
  }
  return 0;
}
