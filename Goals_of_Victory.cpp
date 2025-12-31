#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int &x:a)cin>>x;
    long long sum =0;
    for(int i=0;i<a.size();i++){
      sum+=a[i];
    }
    cout<<(0-sum)<<endl;

  }
  return 0;
}
