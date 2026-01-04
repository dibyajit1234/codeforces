#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,sum=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a) cin>> x;
    if(a[0]==a[n-1]) cout<<"No"<<endl;
    else{
      cout<<"Yes"<<endl;
      cout<<a[n-1]<<' ';
      for(int i=0;i<n-1;i++) cout<<a[i]<<' ';
      cout<<endl;
    }
  }
  return 0;
}
