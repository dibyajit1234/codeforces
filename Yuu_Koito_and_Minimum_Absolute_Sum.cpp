#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,sum=0;
    cin>>n;
    vector<int>a(n);
    for(int &x:a)cin>>x;
    if(n==2 ){
      if(a[0]==-1)a[0]=abs(a[1]);
      else if(a[1]==-1)a[1]=abs(a[0]);
    }
    else{
      for(int i=0;i<n-1;i++){
        if(a[i]==-1)a[i]=0; 
      }
      for(int i=0;i<n-2;i++) sum+=a[i+1]-a[i];
      if(a[n-1]==-1)a[n-1]=(sum>0?0:a[n-2]+abs(sum));
    }    
    
    sum+=a[n-1]-a[n-2];
    cout<<abs(sum)<<endl;
    for(int i:a)cout<<i<<' ';
    cout<<'\n';
  }
  return 0;
}
