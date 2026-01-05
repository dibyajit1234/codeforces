#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,n;
    cin>>a>>b>>n;
    long long count =b;
    vector<long long> v(n);    
    for(long long &x:v){
      cin>>x;
      count +=min(a-1,x);
    }
    cout<<count<<endl;
  }
  return 0;                 
}
