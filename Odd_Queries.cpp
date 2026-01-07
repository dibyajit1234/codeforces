#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    vector<int> a(n),as(n);
    as.push_back(0);
    for(int i=1;i<=n;i++){
      cin>>a[i];
      as[i]=as[i-1]+a[i];
    }
    while(q--){
      int l,r,k,temp=0;
      cin>>l>>r>>k;
      int sum = as[n]-as[r]+as[l-1];
      bool ans = (sum-(r-l+1)*k)%2==0;
      if(ans)cout<<"No"<<endl;
      else cout<<"Yes"<<endl;
    }
  }
  return 0;
}
