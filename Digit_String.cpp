#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n = s.size();

        vector<int> dynamic(16, -1);
        dynamic[0] = 0;

        for(char ch : s) {
            int d = ch - '0';

            vector<int> ndynamic = dynamic;

            for(int mukhosh = 0; mukhosh < 16; mukhosh++) {
                if(dynamic[mukhosh] == -1) continue;

                bool ok = true;

                for(int r = 0; r < 4; r++) {
                    if(mukhosh & (1 << r)) {
                        int nr = (r * 10 + d) % 4;
                        if(nr == 0) ok = false;
                    }
                }

                if(d % 4 == 0) ok = false;

                if(ok) {
                    int nmukhosh = mukhosh | (1 << (d % 4));

                    for(int r = 0; r < 4; r++) {
                        if(mukhosh & (1 << r)) {
                            nmukhosh |= (1 << ((r * 10 + d) % 4));
                        }
                    }

                    ndynamic[nmukhosh] = max(ndynamic[nmukhosh], dynamic[mukhosh] + 1);
                }
            }

            dynamic = ndynamic;
        }

        int best = 0;

        for(int x : dynamic)
            best = max(best, x);

        cout << n - best << '\n';
  }
  return 0;
}
