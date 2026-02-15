#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool ans = false;
    while(n--){
      int x;
      cin>>x;
      if(x%67==0) {
        ans = true;
        break;
      }
    }
    cout<<(ans?"Yes":"No")<<'\n';
  }
  return 0;
}
