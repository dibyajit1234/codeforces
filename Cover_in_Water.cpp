#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,res=0;
    cin>>n;
    string s;
    cin>> s;
    for(int i=0;i<n;i++){
      if(s[i]=='#') continue;
      else{
        if(i>0 && s[i-1]=='.' && i<n-1 && s[i+1]=='.'){
          res++;
          break;
        }else{
          res++;
        }
      }
    }
    cout<<res<<endl;
  }
  return 0;
}
