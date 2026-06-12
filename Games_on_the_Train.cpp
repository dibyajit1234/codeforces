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
    int Max =-1,Min = INT_MAX;
    while(n--){
      int x;
      cin>>x;
      Max = max(Max,x);
      Min = min(Min,x);
    }
    cout<<(Max-Min+1)<<'\n';
  }
}
