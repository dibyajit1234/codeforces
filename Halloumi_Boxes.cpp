#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int &x :a){
      cin>>x;
    }
    bool sorted=true;
    for(int i=1;i<n;i++){
      if(a[i]<a[i-1]) sorted =false;
    }
    if(sorted || k>1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
  }
}
