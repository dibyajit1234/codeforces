#include<bits/stdc++.h>
#define int long long
using namespace std;
int get(vector<int> v){
  if(v.size()==0)return 0;
  int pos = (int)v.size()/2,val=0;
  for(int i=0;i<v.size();i++){
    val+=abs(v[pos]-v[i])-abs(pos-i);
  }
  return val;
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a,b;
    for(int i=0;i<n;i++){
      if(s[i]=='a')a.push_back(i);
      else b.push_back(i);
    }
    cout<<min(get(a),get(b))<<'\n';
    int count=0;
  }
  return 0;
}
