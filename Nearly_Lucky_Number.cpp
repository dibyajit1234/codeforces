#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,ans=0;
  cin>>n;
  while(n>0){
    int digit = n%10;
    if(digit ==4 || digit ==7)ans++;
    n/=10;
  }
  cout<<((ans==4 || ans==7) ? "YES":"NO")<<'\n';
  return 0;
}
