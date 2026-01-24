#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,a,l=0,r=0;
    cin>>n>>a;
    while(n--){
      ll x;
      cin>>x;
      if(x>a)l++;
      if(x<a) r++;
    }
    cout<<(l>r?a+1:a-1)<<'\n';
  }
  return 0;
}
