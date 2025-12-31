#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
  int temp =a;
  a=b;
  b=temp;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool flag=true;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    if(a[0]==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
