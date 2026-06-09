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
    if (n == 2) {
            cout << "1 2 1 1 2 2 1 2\n";
            continue;
    }
    for(int i=1;i<=n;i++)cout<<i<<' ';
    for(int i=1;i<=n;i++)cout<<i<<' ';
    for(int i=2;i<=n;i++)cout<<i<<' ';
    cout<<1<<' ';
    for(int i=4;i<=n;i++)cout<<i<<' ';
    cout<<1<<' ';
    cout<<2<<' ';
    cout<<3<<' ';
    cout<<'\n';
  }
}
