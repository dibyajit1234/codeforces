#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=5;i>=1;i--){
    if(n>=i){
      cout<<(n/i + (n%i ==0 ? 0:1))<<'\n';
      break;
    }
  }
  return 0;
}
