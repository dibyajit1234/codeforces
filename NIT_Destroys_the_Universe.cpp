#include<iostream>
using namespace std;


void solve(){
  int n,count =0,x=0;
  bool ans = true;
  cin>>n;
  int y=n-1,end=n-1;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  while(x<n && a[x++]==0)count++;
  while(y>=0 && a[y--]==0)end--;
  if(count==n){
    cout<<0<<endl; 
    return;
  }
  else{
    for(int i=count;i<=end;i++){
      if(a[i]==0){
        ans = false;
        break;
      }
    }
    if(ans)cout<<1<<endl;
    else cout<<2<<endl;
  }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
