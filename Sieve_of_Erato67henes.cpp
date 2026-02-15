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
    bool ss=false,one = false;

    while(n--){
      int x;
      cin>>x;
      if(x==67)ss = true;
      if(x==1) one = true;
    }
    
    cout<<((ss && one)?"Yes":"No")<<'\n';
  }
  return 0;
}
