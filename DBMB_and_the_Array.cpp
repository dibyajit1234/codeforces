#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,s,x;
    cin>>n>>s>>x;
    bool ans = false;
    int sum =0;
    for(int i=0;i<n;i++) {
      int m;
      cin>>m;
      sum+=m;
    }

    while(sum<=s){
      if(sum ==s) {
        ans = true; 
        break;
      }
      sum+=x;
    }
    cout<<(ans?"Yes":"No")<<'\n';
  }
}
