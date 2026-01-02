#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,k;
    cin>>x>>k;
    vector<int> a;
    for(int i=1;i<=x;i++){
      if(i%k!=0)a.push_back(i);
    }
    if(x%k!=0) {

      cout<<1<<endl<<x<<endl;
    }
    else cout<<2<<endl<<a.front()<<" "<<a.back()<<endl;
  }
  return 0;
}
