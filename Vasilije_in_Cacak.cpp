#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
    long long sum = n*(n+1)/2, first = (k*(k+1))/2,second =sum -((n-k)*(n-k+1)/2) ;
    if(first<=x && second>=x)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
