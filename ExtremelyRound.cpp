#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,count=0;
    cin>>n;
    for(int i=1;i<10;i++){
      long long num = i;
      while(num<=n){
        count++;
        num *=10;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
