#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    long long p1 = abs(x1-x2);
        long long Max = max(x1,x2);
        long long Min = min(x1,x2);

        long long p2 = n-Max+Min;

        long long ans = min(p1,p2);

        cout << ans + k << '\n';
  }
  return 0;
}
