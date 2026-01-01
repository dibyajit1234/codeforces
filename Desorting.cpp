#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,diff=INT_MAX;
    cin>>n;
    bool sorted = true;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int x=0;x<n;x++){
      if(x && a[x-1]>a[x]){
        sorted = false;
        break;
      }
      else if(x>0){
        diff = min(diff,(a[x]-a[x-1]));
      }
    }
    if(!sorted)cout<<0<<endl;
    else cout<<(diff/2) +1<<endl;
  }
  return 0;
}
