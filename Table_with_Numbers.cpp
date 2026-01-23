#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,h,l,row=0,col=0,ans =0;
    cin>>n>>h>>l;
    if(l>h){
      int temp=l;
      l=h;
      h=temp;
    }
    vector<int> a;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x<=h)row++;
      if(x<=l)col++;
    }
    
    cout<<min(col,row/2)<<'\n';
  }
  return 0;
}
