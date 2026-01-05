#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    int count =b;
    vector<int> v(n);    
    for(int &x:v){
      cin>>x;
      count +=min(a-1,x);
    }
    cout<<count<<endl;
  }
  return 0;                 
}
