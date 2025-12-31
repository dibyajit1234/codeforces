#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x;
    cin>>s;
    int count=0,range = max(x.length(),s.length());

    
    while(x.find(s)==string::npos && x.length()<150){
      x+=x;
      count++;

    }

    if(x.find(s)!=string::npos)cout<<count<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}
