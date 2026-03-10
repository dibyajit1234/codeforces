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
    int m=n;
    n=(n%2==0?n-1:n);
    for(int i=1;i<=n;i++){
      cout<<(i%2!=0?-1:3)<<' ';
    }
    if(m%2==0)cout<<2<<'\n';
    else cout<<'\n';
  }
  return 0;
}
