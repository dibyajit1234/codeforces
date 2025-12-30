#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<int> a(n),b(m);
    for(int &c:a){
      cin>>c;
    }
    for(int &c:b){
      cin>>c;
    }
    cout<<(n+m)<<endl;
  }
  return 0;
}
