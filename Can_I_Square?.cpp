#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    ll ans = 0;
    while(n--){
      ll x;
      cin>>x;
      ans+=x;
    }
    ll temp = sqrt(ans);

    cout<<(pow(temp,2)==ans? "Yes":"No")<<'\n';
  }
  return 0;
}
