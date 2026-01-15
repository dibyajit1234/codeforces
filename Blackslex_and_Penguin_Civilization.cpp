#include<bits/stdc++.h>
int popcount(int n){
  int count=0;
  while(n){
    n=n&(n-1);
    count++
  }
  return count;
}
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

  }
}
