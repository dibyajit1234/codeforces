#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,m,d;
    cin>>n>>m>>d;
    if(m>d){
      cout<<n<<'\n';
      continue;
    }
    ll max = (d+m)/m;
    if(max==0)cout<<n<<'\n';
    else{
      ll count = (n+ max -1)/ max; 
      cout<<count<<'\n';
    }
  }
  return 0;
}
