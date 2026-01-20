#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,x;
    cin>>n;
    cin>>x;
    for(int i=1;i<n;i++){
      long long j;
      cin>>j;
      x&=j;
    }
    cout<<x<<endl;
  }
}
