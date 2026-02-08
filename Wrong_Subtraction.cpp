#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  while(k--){
    int digit = n%10;
    n= (digit!=0?n-1:n/10);
  }
  cout<<n<<'\n';
  return 0;
}
