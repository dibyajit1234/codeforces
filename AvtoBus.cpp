#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    if(n%2==0 && n>=4){
      if(n%6==0)cout<<n/6<<' ';
      else cout<<n/6+1<<' ';
      cout<<n/4<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  return 0;
}


