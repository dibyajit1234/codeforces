#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    long long  n,a,b;
    long long cost=0;
    cin>>n>>a>>b;
    cost += n/3 * min(a*3,b);
    int remain_item = n%3;
    cost += min(1LL*remain_item * a, b);
    cout<<cost<<'\n';
  }
  return 0;
}
