#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    int k=1,l=n,m=0,i=0;
    for(int j=0;j<n/2;j++){
      a[i]=l--;
      a[i+1]=k++;
      i+=2;
    }
    if(n%2!=0)a[n-1]=l;
    for(int i=n-1;i>=0;i--){
      cout<<a[i]<<' ';
    }
    cout<<'\n';

  }
  return 0;
}
