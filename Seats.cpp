#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    s = '1' + s + '1';
    int ans = 0;
    for (int i = 1, l = 0; i <= n; ++i) {
        if (s[i] == '0') {
            if (s[i-1] == '1') {
                l = i;
            }
            if (s[i+1] == '1') {
                int c = (l == 1) + (i == n);
                ans += (i - l + 1 + c) / 3;
            }
        } else {
            ++ans;
        }
    }
    std::cout << ans << '\n';  }
  return 0;
}
