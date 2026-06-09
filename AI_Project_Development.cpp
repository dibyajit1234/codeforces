#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,x,y,z,test1=0,test2=0;
    cin>>n>>x>>y>>z;
    int m =0;
    while(m<n){
      m+=x;
      m+=y;
      test1++;
    }
    m=0;
    while(m<n){
      m+=x;
      if(z>0)z--;
      else {
        m+=10*y;
      }
      test2++;
    }
    cout<<(min(test1,test2))<<'\n';
  }
}
