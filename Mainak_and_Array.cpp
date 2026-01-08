#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,ans=INT_MIN;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
        cin>>x;
        ans = max(ans,x-a[0]);
    }
    for(int i=0;i<n-1;i++) ans = max(ans,a[n-1]-a[i]);
    for(int i=0;i<n;i++) ans = max(ans,a[(n-1+i)%n]-a[i]);
    cout<<ans<<endl;
  }
  return 0;
}
