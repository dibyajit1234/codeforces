#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    bool found=false;
    cin>>n;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int i=0;i<n-2;i++){
      int j=i+1,k=n-1;
      while(j<k){
        if(a[i]<a[j] && a[j]>a[k]){
        found = true;
        cout<<"Yes\n";
        cout<<i+1<<' '<<j+1<<' '<<k+1<<'\n';
          i=n;
        break;
      }
      else if(a[j]<a[i])j++;
      else k--;
      }
    }
    if(!found)cout<<"No\n";
  }
  return 0;
}
