#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,one =0;
    bool ans = false;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      if(x==1) one++;
    }
    if(n%2==0){
      if(one>=n/2)ans = true;
    }
    else {
        if(one>=(int)(n/2) +1) ans = true;
    }
    cout<<(ans?"Alice":"Bob")<<endl;
  }
}
