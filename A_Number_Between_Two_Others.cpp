#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    long long x,y;
    cin>>x>>y;
    bool ans = false;
    int i=2;
    while(x*i<y){
      if(y%(x*i)!=0){
        ans = true;
        break;
      }
      i++;
    }
    cout<<(ans?"Yes":"No")<<'\n';
  }
  return 0;
}
