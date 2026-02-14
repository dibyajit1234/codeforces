#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
  a=a+b;
  b= a-b;
  a=a-b;
}
void reverse(vector<int> &a,int l,int r){
  while(l<r){
    swap(a[l++],a[r--]);
  }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    for(int i=n;i>0;i--){
      if(a[n-i]!=i){
        int l=n-i,r=-1;
        for(int j=n-i;j<n;j++){
          if(a[j]==i){
            r=j;
            break;
          }
        }
        reverse(a,l,r);
        break;
      }
    }
    for(int m:a)cout<<m<<' ';
    cout<<'\n';
  }
  return 0;
}
