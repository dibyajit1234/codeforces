#include<bits/stdc++.h>
using namespace std;

int nunu(int n){
  while(n%2==0)n/=2;
  return n;
}

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
       if(nunu(a[i])!=nunu(i)){
        ans = false;
        break;
      }
    }
    cout<<(ans?"Yes":"No")<<'\n';
  }
  return 0;
}
