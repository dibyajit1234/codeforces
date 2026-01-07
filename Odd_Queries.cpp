#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,q,sum=0;
    cin>>n>>q;
    vector<long long> a(n);
    for(long long &x:a){
      cin>>x;
      sum+=x;
    }
    while(q--){
      long long l,r,k,temp=0;
      cin>>l>>r>>k;
      for(long long i=l-1;i<r;i++)temp+=a[i];
      bool ans = ((sum%2==0)==(((r-l+1)*k-temp)%2==0));
      if(ans)cout<<"No"<<endl;
      else cout<<"Yes"<<endl;
    }
  }
  return 0;
}
