/*#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long k);
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
  }
  return 0;
}

long long solve(long long n,long long k){
  long long temp =n,count=0;
  bool found=false;
  while(temp>1){
    count++;
    long long left = temp/2, right =(temp%2==0?temp/2:temp/2 +1);
    if(k==left || k==right) {
      found =true;
      break;
    }
    else if(k>left) temp =right;
    else temp =left;
  } 
  return (found? count:-1);
}
*/ 
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n == k) {
            cout << 0 << "\n";
            continue;
        }

        int a = -1;
        for (int i = 1; i <= 32; i++) {
            long long p = 1LL << i;
            long long l = n / p;
            long long r = (n + p - 1) / p;

            if (k >= l && k <= r) {
                a = i;
                break;
            }
            if (r < k) break;
        }

        cout << a << "\n";
    }
    return 0;
}

