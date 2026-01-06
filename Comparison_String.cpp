#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,count=1,ans =1;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
      if(s[i]==s[i-1])count++;
      else count =1;
      ans = max(ans,count);
    }
    cout<<ans+1<<endl;
  }
  return 0;
}
