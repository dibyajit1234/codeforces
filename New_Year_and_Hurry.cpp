#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,total =0,ans =0;
  cin>>n>>k;
  int time = 240-k;
  int need = (n*(n+1)/2)*5;
  for(int i=1;i<=n;i++){
    total +=5*i;
    if(total +k>240)break;
    ans++;
  }
  cout<<ans<<'\n';
  return 0;
}
