#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,x,result;
    cin>>n>>k>>x;
    if(x!=1){
      cout<<"Yes"<<endl<<n<<endl;
      for(int i=0;i<n;i++)cout<<1<<" ";
      cout<<endl;
    }
    else if(k==1 ||(k==2 && n%2==1)){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl<<n/2<<endl;
      if(n%2==0)cout<<2<<" ";
      else cout<<3<<" ";
      for(int i=1;i<n/2;i++){
        cout<<2<<" ";
      }
      cout<<endl;
    }
    
  }
  return 0;
}
