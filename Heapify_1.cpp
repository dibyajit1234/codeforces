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
    bool ans = true;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];


    for(int i=1;i<=n;i++){
        if(a[i] != i){
            int j = i;
            while(j <= n && a[j] != i) j *= 2;
            if(j > n){
                ans = false;
                break;
            }else {a[n-i+1]=a[i];}
        }
    }
    cout<<(ans?"Yes":"No")<<'\n';
  }
  return 0;
}
