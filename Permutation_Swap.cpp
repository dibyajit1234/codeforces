#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(b==0)return a;
  return gcd(b,a%b);
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      ans = gcd(ans,abs(x-i));
    }
    cout<<ans<<endl;

  }
  return 0;
}
//In order to move pi to its right position, what does the value of k have to satisfy?
