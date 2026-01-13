#include<bits/stdc++.h>
using namespace std;


void solve(){
  long long  x,n;
  cin>>x>>n;
  long long ans = 0;
		if (n % 4 == 0) {
			ans = x;
		} else if (n % 4 == 1) {
			ans = (x % 2 == 0 ? x - n : x + n);
		} else if (n % 4 == 2) {
			ans = (x % 2 == 0 ? x + 1 : x - 1);
		} else {
			long long m = ((n + 3) / 4) * 4;
			ans = (x % 2 == 0 ? x + m : x - m);
		}
		cout << ans << '\n';
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
