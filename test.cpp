#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int &x:a)cin>>x;
  if(n==1)cout<<a[0]<<endl;
  else cout<<(a[0]^a[1])<<endl;
}
