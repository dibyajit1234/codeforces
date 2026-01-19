#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,c0=0,c1=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      if(x==0)c0++;
      if(x==1)c1++;
    }

    
    cout<<(1ll<<c0)*(ll)c1<<endl;
  }
}
