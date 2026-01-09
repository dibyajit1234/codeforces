#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-2;i>=0;i--){
      while(a[i]>=a[i+1] && a[i]>0){
        a[i]=a[i]/2;
        count++;
      }
      if(a[i]==a[i+1]) {
        count =-1;
        break;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
