#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(b==0) return a;
  return gcd(b,a%b);
}
int main(){
  int t;
  cin>> t;
  while(t--){
    int n;
    cin>>n;
    bool possible = false;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    if(n<2) possible= true;
    else if(gcd(a[0],a[1])<=2) possible = true;
    else{
      for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
          if(gcd(a[i],a[j])<=2){
            possible = true;
          }
        }
      }
    }
    if(possible)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
