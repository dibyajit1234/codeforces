#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,c1=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a;
    for(int i=0;i<n;i++)if(s[i]=='1'){c1++;a.push_back(i+1);}
    if(c1 %2!=0)cout<<-1<<'\n';
    else if(c1 ==0)cout<<0<<'\n';
    else{
      cout<<c1<<'\n';
      for(int x:a)cout<<x<<' ';
      cout<<'\n';
    }
  }
  return 0;
}
