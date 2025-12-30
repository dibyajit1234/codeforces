#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,r;
    cin>>n;
    r=n%3;
    if(r==1 ||r==2) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
  }
  return 0;
}
