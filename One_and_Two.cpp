#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,i=0,k=0,j=n-1,res =-1;
    cin>>n;
    vector<int> a(n);
    for(int &x:a)cin>>x;
    while(k<=n-2){
      int c1=0,c2=0;
      for(int i=0;i<=k;i++){
        if(a[i]==2) c1++;
      }
      for(int i=k+1;i<n;i++){
        if(a[i]==2) c2++;
      }
      if(c1==c2){
        res=k+1;
        break;
      }else k++;
    }
    cout<<res<<endl;
  }
  return 0;
}
