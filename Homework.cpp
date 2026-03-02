#include<bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n;
    string a,b,c,s="";
    cin>>a>>m>>b>>c;
    for(int i=b.size()-1;i>=0;i--)if(c[i]=='V')s+=b[i];
    s+=a;
    for(int i=0;i<b.size();i++)if(c[i]=='D')s+=b[i];
    cout<<s<<'\n';
  }
  return 0;
}
