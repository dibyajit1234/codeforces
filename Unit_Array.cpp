#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,pos=0,neg=0,sum=0,res=0;
    cin>>n;
    vector<int> a(n);
    for(int &x:a){
      cin>>x;
      if(x>0)pos++;
      else neg++;
      sum+=x;
    }
    if(sum<0){
      if(n<3 && pos==0){
        res = n;
      }
      else if(n%2==0){
        if(pos) res = (n/2)-pos;
        else res = n/2;
      }else{
        if(pos) res = (n/2)+1-pos;
        else res = (n/2)+2;
      }
    }
    else{
      if(neg%2!=0) res=1;
    }
    cout<<res<<endl;
  }
  return 0;
}
