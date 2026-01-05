#include<bits/stdc++.h>
using namespace std;
void append(set<pair<int,int>> &v, int a,int b,int x,int y){
  v.insert({x+a,y+b});
  v.insert({x-a,y-b});
  v.insert({x+a,y-b});
  v.insert({x-a,y+b});
  v.insert({x+b,y+a});
  v.insert({x-b,y-a});
  v.insert({x-b,y+a});
  v.insert({x+b,y-a});
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,x1,y1,x2,y2,count=0;
    cin>>a>>b;
    cin>>x1>>y1;
    cin>>x2>>y2;
    set<pair<int,int>> p1;
    set<pair<int,int>> p2;
    append(p1,a,b,x1,y1);
    append(p2,a,b,x2,y2);
    for(auto p:p1){
      if(p2.count(p))count++;
    }
    cout<<count<<endl;
  }
  return 0;
}

