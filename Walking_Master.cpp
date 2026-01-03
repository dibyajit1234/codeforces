#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d,count=0;
    bool possible=true;
    cin>>a>>b>>c>>d;
    while(b<d){
      b++;
      a++;
      count++;
    }
    if(c>a) possible=false;
    while(a>c){
      a--;
      count++;
    }
    if(possible) cout<<count<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}
