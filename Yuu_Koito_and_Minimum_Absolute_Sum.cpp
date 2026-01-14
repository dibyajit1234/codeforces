#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,sum=0;
    cin>>n;
    vector<int>a(n);
    for(int &x:a)cin>>x;
    if(a[0]==-1)a[0]=a[n-1];
    if(a[n-1]==-1) a[n-1]=a[0];
    for(int i=0;i<n;i++){
      if(a[i]==-1)a[i]=0;
    }
    cout<<abs(a[n-1]-a[0])<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<' ';
    cout<<'\n';
  }
  return 0;
}
