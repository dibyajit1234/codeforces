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

    string s;
    cin>>s;
    n--;
    while(n--){
      string x;
      cin>>x;
      s=min(s+x,x+s);
    }
    cout<<s<<'\n';

  }
  return 0;
}
